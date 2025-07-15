import java.util.Scanner;

class wordVerifier{
    private static String[] wordstoverify;
    int wordCount;
    wordVerifier(int maxw){
        wordstoverify = new String[maxw];
        wordCount = 0; 
    }
    public void addword(String word){
        if(wordCount < wordstoverify.length){
            wordstoverify[wordCount] = word;
            wordCount++;
        }else{System.out.println("List is full.");}
    }
    void verifyDocument(String document){
        boolean found = true;
        for(String word : wordstoverify){
            if(word == null && document.contains(word)){
            found = true;
            System.out.println("Found: "+word);}
        }
        if (!found) {
            System.out.println("Document does not contain any of the specified words.");
        } else {
            System.out.println("Words not found in the document:");
            for (String word : wordstoverify){
                if (word != null && !document.contains(word)) {
                    System.out.println(word);
                }
            }
        }
    }
}

public class mat2 {
    public static void main(String[] args){
       Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter the maximum number of words to verify: ");
        int maxWords = scanner.nextInt();
        scanner.nextLine(); // Consume the newline character
        
        wordVerifier wordVerifier = new wordVerifier(maxWords);
        
        System.out.println("Enter the words to verify:");
        for (int i = 0; i < maxWords; i++) {
            String word = scanner.nextLine();
            wordVerifier.addword(word);
        }

        System.out.print("Enter the document text: ");
        String document = scanner.nextLine();
        
        System.out.println("Verifying words in the document:");
        wordVerifier.verifyDocument(document);
        
        scanner.close();
    }
}

