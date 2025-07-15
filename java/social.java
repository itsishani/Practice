import java.util.ArrayList;
import java.util.Scanner;

class UserProfile {
    private String username;
    private String displayName;
    private String bio;
    private ArrayList<String> posts;

    public UserProfile(String username, String displayName) {
        if (username == null || username.isEmpty() || displayName == null || displayName.isEmpty()) {
            throw new IllegalArgumentException("Username and display name cannot be null or empty.");
        }

        this.username = username;
        this.displayName = displayName;
        this.bio = "This user has not set a bio yet.";
        this.posts = new ArrayList<>();
    }

    public void setBio(String bio) {
        this.bio = bio;
    }

    public void createPost(String post) {
        if (post == null || post.isEmpty()) {
            throw new IllegalArgumentException("Post cannot be null or empty.");
        }
        posts.add(post);
    }

    public void displayProfile() {
        System.out.println("Username: " + username);
        System.out.println("Display Name: " + displayName);
        System.out.println("Bio: " + bio);
        System.out.println("Posts:");

        if (posts.isEmpty()) {
            System.out.println("No posts yet.");
        } else {
            for (String post : posts) {
                System.out.println("- " + post);
            }
        }
    }
}

public class social {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter your username: ");
        String username = scanner.nextLine();
        System.out.print("Enter your display name: ");
        String displayName = scanner.nextLine();

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
                choice = scanner.nextInt();
                scanner.nextLine(); // Consume the newline character

                switch (choice) {
                    case 1:
                        System.out.print("Enter your bio: ");
                        String bio = scanner.nextLine();
                        user.setBio(bio);
                        break;
                    case 2:
                        System.out.print("Enter your post: ");
                        String post = scanner.nextLine();
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

        scanner.close();
    }
}
