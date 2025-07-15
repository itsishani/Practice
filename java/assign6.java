//question1

// public class assign6 {
//     public static void main(String[] args) {
//         Scanner scanner = new Scanner(System.in);

//         // Define the date format
//         DateTimeFormatter dateFormatter = DateTimeFormatter.ofPattern("dd/MM/yyyy");

//         while (true) {
//             System.out.print("Enter a date (dd/mm/yyyy): ");
//             String input = scanner.nextLine();

//             try {
//                 // Parse the input date using the specified format
//                 LocalDate date = LocalDate.parse(input, dateFormatter);
                
//                 // Date is valid, print it
//                 System.out.println("You entered a valid date: " + date.format(dateFormatter));
//                 break; // Exit the loop
//             } catch (DateTimeParseException e) {
//                 // Handle the exception if the input is not in the correct format
//                 System.out.println("Invalid date format. Please enter a date in the format dd/mm/yyyy.");
//             }
//         }

//         scanner.close();
//     }
// }


//Question2 

// public class assign6 {
//     public static void main(String[] args) {
//         Scanner scanner = new Scanner(System.in);

//         while (true) {
//             try {
//                 System.out.print("Enter a positive integer: ");
//                 int number = scanner.nextInt();

//                 if (number > 0) {
//                     System.out.println("You entered a positive integer: " + number);
//                     break; // Exit the loop if a positive integer is entered
//                 } else {
//                     System.out.println("Please enter a positive integer greater than 0.");
//                 }
//             } catch (InputMismatchException e) {
//                 // Handle the exception if the user enters a non-integer value
//                 System.out.println("Invalid input. Please enter a valid positive integer.");
//                 scanner.nextLine(); // Consume the invalid input
//             }
//         }

//         scanner.close();
//     }
// }


//question 3
// public class assign6 {
//     public static void main(String[] args) {
//         Scanner scanner = new Scanner(System.in);

//         while (true) {
//             System.out.print("Enter a URL: ");
//             String urlString = scanner.nextLine();

//             try {
//                 // Attempt to create a URL object
//                 URL url = new URL(urlString);

//                 // If no exception is thrown, the URL is well-formed
//                 System.out.println("You entered a well-formed URL: " + url);
//                 break; // Exit the loop
//             } catch (MalformedURLException e) {
//                 // Handle the exception if the URL is not well-formed
//                 System.out.println("Invalid URL. Please enter a well-formed URL.");
//             }
//         }

//         scanner.close();
//     }
// }

