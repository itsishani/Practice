import java.util.ArrayList;
import java.util.Scanner;

class userprofile{
    private String username;
    private String displayname;
    private String bio;
    private ArrayList<String> posts;
    public userprofile(String username,String displayname){
        if(username == null || username.isEmpty() || displayname == null || displayname.isEmpty()){
            throw new IllegalArgumentException("Displayname and username should not be null.");
        }
        this.username = username;
        this.displayname = displayname;
        this.bio = "This bio is null";
        this.posts = new ArrayList<>();
    }
    public void setbio(String bio){
        this.bio = bio;
    }
    public void createpost(String post){
        if(post == null || post.isEmpty()){
            throw new IllegalArgumentException("The post cannot be empty");
        }
        posts.add(post);
    }
    public void dispalyprofile(){
        System.out.println("Username "+username);
        System.out.println("Displayname "+displayname);
        System.out.println("Bio "+bio);
        System.out.println("Posts: ");
        if(posts.isEmpty()){
            System.out.println("Post is empty");
        }else{
            for(String post: posts){
                System.out.println("- " + post);
            }
        }
    }
}
public class pract9 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your username: ");
        String username = sc.nextLine();
        System.out.print("Enter your display name: ");
        String displayName = sc.nextLine();
        try {
            UserProfile user = new UserProfile(username, displayName);
           int choice;
            do {
                System.out.println("\nOptions:");
                System.out.println("1. Set Bio");
                System.out.println("2. Create Post");
                System.out.println("3. Display Profile");
                System.out.println("4. Exit");
                System.out.print("Enter your choice: ");
                choice = sc.nextInt();
                sc.nextLine(); // Consume the newline character

                switch (choice) {
                    case 1:
                        System.out.print("Enter your bio: ");
                        String bio = sc.nextLine();
                        user.setBio(bio);
                        break;
                    case 2:
                        System.out.print("Enter your post: ");
                        String post = sc.nextLine();
                        user.createPost(post);
                        break;
                    case 3:
                        user.displayProfile();
                        break;
                    case 4:
                        System.out.println("Goodbye!");
                        break;
                    default:
                        System.out.println("Invalid choice. Please try again.");
                }
            } while (choice != 4);
        } catch (IllegalArgumentException e) {
            System.out.println("Error: " + e.getMessage());
        }
        sc.close();
    }
}


