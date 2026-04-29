#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// TODO: Write your extractWord function here

// TODO: Write your countWordOccurrences function here

// TODO: Write your analyzeText function here

int main() {
    char inputSentence[200];
    char searchWord[50];
    
    // Read input sentence
    fgets(inputSentence, sizeof(inputSentence), stdin);
    // Remove newline character if present
    inputSentence[strcspn(inputSentence, "\n")] = '\0';
    
    // Read search word
    scanf("%s", searchWord);
    
    // TODO: Write your code below
    // Call analyzeText function and store total word count
    // Call countWordOccurrences function and store occurrences
    // Calculate frequency percentage
    // Determine frequency category
    
    // Output results in the required format
    // printf("Total words: %d\n", totalWords);
    // printf("Occurrences of '%s': %d\n", searchWord, occurrences);
    // printf("Frequency: %.1f%%\n", frequency);
    // printf("Category: %s\n", category);
    
    return 0;
}

/*
// TODO: Define the Product struct here
struct Product {
    char name[30];
    float price;
    int stock;
};

// TODO: Implement the findMostExpensive function here
int findMostExpensive(struct Product product[], int size){
    float maxPrice = -1000.0;

    for (int i = 0; i < size; i++){
        if (product[i].price > maxPrice) {
            maxPrice = product[i].price;
        }
    }

    for (int i = 0; i < size; i++) {
        if (product[i].price == maxPrice) {
            return i;
        }
    }
    return -1;
}

// TODO: Implement the calculateTotalValue function here
float calculateTotalValue(struct Product product[], int size){
    float summ = 0;
    for(int i = 0; i < size; i++){
        summ += product[i].price * product[i].stock;
    }

    return summ;
}

// TODO: Implement the findLowStock function here
int findLowStock(struct Product product[], int size, int threshold){
    int count = 0;
    for(int i = 0; i < size; i++){
        if(product[i].stock < threshold) {
            count++;
        }
    }
    return count;
}

// TODO: Implement the printProdInfo function here
void printProdInfo(struct Product inventory[], int size) {
    for (int i = 0; i < 3; i++) {
        // Product [index]: [name] - Price: [price], Stock: [stock]
        printf("Product %d: %s - Price: %.2f, Stock: %d\n", i, inventory[i].name, inventory[i].price, inventory[i].stock);
    }
}

int main() {
    // Create array of 3 products
    struct Product inventory[3];
    
    // Read input for each product
    for (int i = 0; i < 3; i++) {
        scanf("%s", inventory[i].name);
        scanf("%f", &inventory[i].price);
        scanf("%d", &inventory[i].stock);
    }
    
    // TODO: Print each product's information
    printProdInfo(inventory, 3);

    // TODO: Find and print the most expensive product
    int mostExpensiveIndex = findMostExpensive(inventory, 3);
    if (mostExpensiveIndex != -1) {
        printf("Most expensive product: %s\n", inventory[mostExpensiveIndex].name);
    }

    // TODO: Calculate and print total inventory value
    float totalValue = calculateTotalValue(inventory, 3);
    printf("Total inventory value: %.2f\n", totalValue);

    // Read low stock threshold
    int threshold;
    scanf("%d", &threshold);
    
    // TODO: Find and print products with low stock
    int lowStockCount = findLowStock(inventory, 3, threshold);
    printf("Products with low stock: %d\n", lowStockCount);

    // TODO: Check if most expensive product is well stocked
    if (mostExpensiveIndex != -1 && inventory[mostExpensiveIndex].stock > 10) {
        printf("Most expensive product is well stocked\n");
    } else {
        printf("Most expensive product needs restocking\n");
    }

    return 0;
}*/

/*
// TODO: Write your concatenateStrings function here
char* concatenateStrings(char* str1, char* str2){

    char* result = (char*)malloc((strlen(str1) + strlen(str2) + 1) * sizeof(char));

    if(result == NULL){
        return NULL;
    }

    strcpy(result, str1);
    strcat(result, str2);

    return result;
}

// TODO: Write your processText function here
char* processText(char* word1, char* word2, char* separator){

    char* temp = concatenateStrings(word1, separator);
    if(temp == NULL) return NULL;
    char* finalResult = concatenateStrings(temp, word2);
    free(temp);

    return finalResult;
}

int main() {
    // Read input
    char firstWord[50];
    char secondWord[50];
    char connector[50];
    
    scanf("%s", firstWord);
    scanf("%s", secondWord);
    scanf("%s", connector);
    
    // TODO: Write your code below
    // Call processText function and handle the result
    char* result = processText(firstWord, secondWord, connector);

    if (result != NULL) {
        printf("Result: %s\n", result);
        printf("Length: %d\n", (int)strlen(result));
        free(result);
    } else {
        printf("Memory allocation failed\n");
    }
    
    return 0;
}*/

/*
// TODO: Define your enum ShapeType and typedef here
enum ShapeType {
    CIRCLE,
    RECTANGLE,
    TRIANGLE
};

typedef enum ShapeType Shape;

// TODO: Implement the calculateArea function here
float calculateArea(Shape shape, float dimension1, float dimension2) {
    switch(shape){
        case CIRCLE: 
            return 3.14159 * dimension1 * dimension1;
        case RECTANGLE: 
            return dimension1 * dimension2;
        case TRIANGLE: 
            return 0.5 * dimension1 * dimension2;
        default:
            return 0.0;
    }
    return 0.0;
}

// TODO: Implement the printShapeInfo function here
void printShapeInfo(Shape shape) {
    switch(shape){
        case CIRCLE: 
            printf("Shape: Circle\n");
            break;
        case RECTANGLE: 
            printf("Shape: Rectangle\n");
            break;
        case TRIANGLE: 
            printf("Shape: Triangle\n");
            break;
        default:
            printf("Shape: Unknown\n");
    }
}

int main() {
    // Read input
    int shapeChoice;
    float dim1, dim2;
    scanf("%d", &shapeChoice);
    scanf("%f", &dim1);
    scanf("%f", &dim2);
    
    // TODO: Write your code below
    // Declare selectedShape variable and assign based on shapeChoice
    Shape selectedShape;
    
    switch(shapeChoice) {
        case 0: 
            selectedShape = CIRCLE;
            break;
        case 1: 
            selectedShape = RECTANGLE;
            break;
        case 2: 
            selectedShape = TRIANGLE;
            break;
    }

    // Call printShapeInfo function
    printShapeInfo(selectedShape);

    // Print dimensions
    printf("Dimensions: %0.1f %0.1f\n", dim1, dim2);

    // Calculate and print area
    float area = calculateArea(selectedShape, dim1, dim2);
    printf("Area: %0.2f\n", area);

    // Determine and print category
    if(area < 10.0) {
        printf("Category: Small");
    }else if (10 <= area && area <= 50){
        printf("Category: Medium");
    } else {
        printf("Category: Large");
    }
    
    return 0;
}*/

/*
// TODO: Define your struct and typedef here
struct Book{
    int id;
    char title[50];
    float price;
    int quantity;
};

int main() {
    // TODO: Declare your Book variables here
    typedef struct Book Book;
    
    // Read input for first book
    int id1, quantity1;
    char title1[50];
    float price1;
    
    scanf("%d", &id1);
    scanf("%s", title1);
    scanf("%f", &price1);
    scanf("%d", &quantity1);
    
    // TODO: Assign values to book1 members
    Book book1;
    book1.id = id1;
    book1.price = price1;
    book1.quantity = quantity1;
    strncpy(book1.title, title1, sizeof(book1.title) - 1);
    book1.title[sizeof(book1.title) - 1] = '\0';
    
    // Read input for second book
    int id2, quantity2;
    char title2[50];
    float price2;
    
    scanf("%d", &id2);
    scanf("%s", title2);
    scanf("%f", &price2);
    scanf("%d", &quantity2);
    
    // TODO: Assign values to book2 members
    Book book2;
    book2.id = id2;
    book2.price = price2;
    book2.quantity = quantity2;
    strncpy(book2.title, title2, sizeof(book2.title) - 1);
    book2.title[sizeof(book2.title) - 1] = '\0';

    // TODO: Print book information, calculate values, and compare
    printf("Book 1: ID=%d, Title=%s, Price=%.2f, Quantity=%d\n", book1.id, book1.title, book1.price, book1.quantity);
    printf("Book 2: ID=%d, Title=%s, Price=%.2f, Quantity=%d\n", book2.id, book2.title, book2.price, book2.quantity);

    float totalValue1 = book1.price * book1.quantity;
    float totalValue2 = book2.price * book2.quantity;
    printf("Book 1 Total Value: %.2f\n", totalValue1);
    printf("Book 2 Total Value: %.2f\n", totalValue2);

    float inventoryValue = totalValue1 + totalValue2;
    printf("Combined Inventory Value: %.2f\n", inventoryValue);

    if (totalValue1 > totalValue2) {
        printf("Book 1 has higher value\n");
    } else if (totalValue2 > totalValue1) {
        printf("Book 2 has higher value\n");
    } else {
        printf("Both books have equal value\n");
    }

    return 0;
}*/

/*
// TODO: Create typedef aliases here
typedef float Temperature;
typedef int SensorID;
typedef int Status;

int main() {
    // TODO: Declare variables using the typedef aliases
    SensorID sensor;
    Temperature currentTemp;
    Temperature threshold;
    Status alertStatus;
    
    // Read input values
    scanf("%d", &sensor);
    scanf("%f", &currentTemp);
    scanf("%f", &threshold);
    scanf("%d", &alertStatus);
    
    // TODO: Write your code below to print sensor information and perform analysis
    printf("Sensor ID: %d\n", sensor);
    printf("Current Temperature: %.1f\n", currentTemp);
    printf("Threshold: %.1f\n", threshold);
    printf("Alert Status: %d\n", alertStatus);

    Temperature difference = currentTemp - threshold;
    printf("Temperature Difference: %.1f\n", difference);

    if (currentTemp < 0.0) {
        printf("Category: Freezing\n");
    } else if (currentTemp <= 25.0) {
        printf("Category: Normal\n");
    } else {
        printf("Category: Hot\n");
    }

    if (currentTemp > threshold && alertStatus == 1) {
        printf("Alert: Temperature exceeded threshold!\n");
    } else {
        printf("Alert: No alert triggered\n");
    }

    return 0;
}*/

/*
// TODO: Define the WeatherCondition enum here
enum WeatherCondition{
    SUNNY,
    CLOUDY,
    RAINY,
    STORMY,
    SNOWY
};

// TODO: Implement the getWeatherAdvice function here
void getWeatherAdvice(enum WeatherCondition currentWeather){
    switch (currentWeather) {
        case SUNNY:
            printf("Perfect day for outdoor activities!\n");
            break;
        case CLOUDY:
            printf("Good day for a walk, no sun protection needed.\n");
            break;
        case RAINY:
            printf("Don't forget your umbrella!\n");
            break;
        case STORMY:
            printf("Stay indoors and avoid travel.\n");
            break;
        case SNOWY:
            printf("Drive carefully and dress warmly.\n");
            break;
    }
}

// TODO: Implement the getActivitySuggestion function here
void getActivitySuggestion(enum WeatherCondition currentWeather){
    switch (currentWeather) {
        case SUNNY:
            printf("Suggested activity: Beach or hiking\n");
            break;
        case CLOUDY:
            printf("Suggested activity: Photography or gardening\n");
            break;
        case RAINY:
            printf("Suggested activity: Reading or indoor games\n");
            break;
        case STORMY:
            printf("Suggested activity: Movie marathon\n");
            break;
        case SNOWY:
            printf("Suggested activity: Skiing or hot cocoa\n");
            break;
    }
}

int main() {
    // Read input
    int weatherInput;
    scanf("%d", &weatherInput);
    
    // TODO: Declare currentWeather variable and assign enum value based on input
    enum WeatherCondition currentWeather;
    switch (weatherInput) {
        case 0:
            currentWeather = SUNNY;
            break;
        case 1:
            currentWeather = CLOUDY;
            break;
        case 2:
            currentWeather = RAINY;
            break;
        case 3:
            currentWeather = STORMY;
            break;
        case 4:
            currentWeather = SNOWY;
            break;
        default:
            break;
    }

    // TODO: Print current weather condition in format "Current weather: [numeric_value]"
    printf("Current weather: %d\n", weatherInput);

    // TODO: Call getWeatherAdvice function
    getWeatherAdvice(currentWeather);

    // TODO: Call getActivitySuggestion function
    getActivitySuggestion(currentWeather);

    return 0;
}*/

/*
// TODO: Define the TaskStatus enum here
enum TaskStatus {
    PENDING,
    IN_PROGRESS,
    COMPLETED,
    CANCELLED
};

int main() {
    // Read input for three task statuses
    int status1, status2, status3;
    scanf("%d", &status1);
    scanf("%d", &status2);
    scanf("%d", &status3);
    
    // TODO: Declare three enum TaskStatus variables (task1, task2, task3)
    enum TaskStatus task1, task2, task3;
    
    // TODO: Assign enum values based on input
    if (status1 == 0) task1 = PENDING;
    else if (status1 == 1) task1 = IN_PROGRESS;
    else if (status1 == 2) task1 = COMPLETED;
    else if (status1 == 3) task1 = CANCELLED;
    
    if (status2 == 0) task2 = PENDING;
    else if (status2 == 1) task2 = IN_PROGRESS;
    else if (status2 == 2) task2 = COMPLETED;
    else if (status2 == 3) task2 = CANCELLED;
    
    if (status3 == 0) task3 = PENDING;
    else if (status3 == 1) task3 = IN_PROGRESS;
    else if (status3 == 2) task3 = COMPLETED;
    else if (status3 == 3) task3 = CANCELLED;
    
    // TODO: Print task statuses
    printf("Task 1 status: %d\n", task1);
    printf("Task 2 status: %d\n", task2);
    printf("Task 3 status: %d\n", task3);
    
    // TODO: Count tasks in each category
    int pending_count = 0, in_progress_count = 0, completed_count = 0, cancelled_count = 0;
    
    if (task1 == PENDING) pending_count++;
    else if (task1 == IN_PROGRESS) in_progress_count++;
    else if (task1 == COMPLETED) completed_count++;
    else if (task1 == CANCELLED) cancelled_count++;
    
    if (task2 == PENDING) pending_count++;
    else if (task2 == IN_PROGRESS) in_progress_count++;
    else if (task2 == COMPLETED) completed_count++;
    else if (task2 == CANCELLED) cancelled_count++;
    
    if (task3 == PENDING) pending_count++;
    else if (task3 == IN_PROGRESS) in_progress_count++;
    else if (task3 == COMPLETED) completed_count++;
    else if (task3 == CANCELLED) cancelled_count++;
    
    printf("Pending tasks: %d\n", pending_count);
    printf("In progress tasks: %d\n", in_progress_count);
    printf("Completed tasks: %d\n", completed_count);
    printf("Cancelled tasks: %d\n", cancelled_count);
    
    // TODO: Calculate and print active tasks count
    int active_tasks = pending_count + in_progress_count;
    printf("Active tasks: %d\n", active_tasks);
    
    return 0;
}*/

/*
// TODO: Define the TrafficLight enum here
enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    // Read input
    int input;
    scanf("%d", &input);
    
    // TODO: Declare currentLight variable and assign enum value based on input
    enum TrafficLight currentLight;

    switch (input) {
        case 0:
            currentLight = RED;
            break;
        case 1:
            currentLight = YELLOW;
            break;
        case 2:
            currentLight = GREEN;
            break;
        default:
            break;
    }
    
    // TODO: Print current light status
    //Вывести текущий статус светофора в точном формате: Current light: [enum_name]
    printf("Current light: ");
    switch (currentLight) {
        case RED:
            printf("RED\n");
            break;
        case YELLOW:
            printf("YELLOW\n");
            break;
        case GREEN:
            printf("GREEN\n");
            break;
    }

    // TODO: Print numeric value
    printf("Numeric value: %d\n", currentLight);

    // TODO: Print action based on current light
    switch (currentLight) {
        case RED:
            printf("Action: Stop\n");
            break;
        case YELLOW:
            printf("Action: Prepare to stop\n");
            break;
        case GREEN:
            printf("Action: Go\n");
            break;
    }

    // TODO: Calculate and print next light
    enum TrafficLight nextLight;
    switch (currentLight) {
        case RED:
            nextLight = GREEN;
            break;
        case YELLOW:
            nextLight = RED;
            break;
        case GREEN:
            nextLight = YELLOW;
            break;
    }
    
    // TODO: Print next light
    printf("Next light: ");
    switch (nextLight) {
        case RED:
            printf("RED\n");
            break;
        case YELLOW:
            printf("YELLOW\n");
            break;
        case GREEN:
            printf("GREEN\n");
            break;
    }

    return 0;
}*/

/*
// TODO: Define the Contact struct here
struct Contact {
    char name[50];
    char phone[20];
    char email[40];
    int age;
};

struct Contact *createContact() {
    struct Contact *contactPtr = (struct Contact *)malloc(sizeof(struct Contact));

    contactPtr->age = 0;
    contactPtr->name[0] = '\0';
    contactPtr->phone[0] = '\0';
    contactPtr->email[0] = '\0';

    return contactPtr;
}

void populateContact(struct Contact *contactPtr) {
    // Read input values
    printf("Enter name: ");
    fgets(contactPtr->name, sizeof(contactPtr->name), stdin);
    contactPtr->name[strcspn(contactPtr->name, "\n")] = '\0'; // Remove newline character

    printf("Enter phone: ");
    fgets(contactPtr->phone, sizeof(contactPtr->phone), stdin);
    contactPtr->phone[strcspn(contactPtr->phone, "\n")] = '\0'; // Remove newline character

    printf("Enter email: ");
    fgets(contactPtr->email, sizeof(contactPtr->email), stdin);
    contactPtr->email[strcspn(contactPtr->email, "\n")] = '\0'; // Remove newline character

    printf("Enter age: ");
    scanf("%d", &contactPtr->age);

}

void displayContact(const struct Contact *contactPtr){

    printf("Name: %s\n", contactPtr->name);
    printf("Phone: %s\n", contactPtr->phone);
    printf("Email: %s\n", contactPtr->email);
    printf("Age: %d\n", contactPtr->age);

}

void updateContact(struct Contact *contactPtr){

    printf("What would you like to update?\n");
    printf("1. Name\n");
    printf("2. Phone\n");
    printf("3. Email\n");
    printf("4. Age\n");
    printf("Enter choice (1-4): ");

    int choice;
    scanf("%d", &choice);

    // Read input values
    switch (choice) {
        case 1:
            printf("Enter new name: ");
            scanf("%s", contactPtr->name);
            break;
        case 2:
            printf("Enter new phone: ");
            scanf("%s", contactPtr->phone);
            break;
        case 3:
            printf("Enter new email: ");
            scanf("%s", contactPtr->email);
            break;
        case 4:
            printf("Enter new age: ");
            scanf("%d", &contactPtr->age);
            break;
        default:
            printf("Invalid choice\n");
            return;
        }
    printf("Contact updated successfully\n");
}

int main() {
    // TODO: Create a Contact variable named person
    // struct Contact person;
    struct Contact *newContact = createContact();

    populateContact(newContact);
    
    printf("--- Initial Contact ---\n");
    displayContact(newContact);

    printf("--- Updating Contact ---\n");
    updateContact(newContact);

    printf("--- Updated Contact ---\n");
    displayContact(newContact);

    printf("Contact management completed\n");

    free(newContact);

    return 0;
}*/

/*
    fgets(buffer, size, stdin) — считывает строку ввода, включая пробелы 
        (в отличие от scanf, которая останавливается на пробельном символе). 
        Она сохраняет ввод в buffer, считывая максимум size - 1 символов. 
        Она также сохраняет символ новой строки '\n' в конце.

    strcspn(str, "\n") — возвращает индекс первого вхождения '\n' в str. 
        Используется для удаления завершающего символа новой строки, 
        оставленного fgets: str[strcspn(str, "\n")] = '\0';

    strchr(str, ch) — ищет символ ch в str и возвращает указатель на его 
        местоположение или NULL, если символ не найден.
*/
/*
// TODO: Define the Contact struct here
struct Contact {
    char name[50];
    char phone[20];
    char email[40];
    int age;
};

struct Contact *createContact() {
    struct Contact *contactPtr = (struct Contact *)malloc(sizeof(struct Contact));

    contactPtr->age = 0;
    contactPtr->name[0] = '\0';
    contactPtr->phone[0] = '\0';
    contactPtr->email[0] = '\0';

    return contactPtr;
}

void populateContact(struct Contact *contactPtr) {
    // Read input values
    printf("Enter name: ");
    fgets(contactPtr->name, sizeof(contactPtr->name), stdin);
    contactPtr->name[strcspn(contactPtr->name, "\n")] = '\0'; // Remove newline character

    printf("Enter phone: ");
    fgets(contactPtr->phone, sizeof(contactPtr->phone), stdin);
    contactPtr->phone[strcspn(contactPtr->phone, "\n")] = '\0'; // Remove newline character

    printf("Enter email: ");
    fgets(contactPtr->email, sizeof(contactPtr->email), stdin);
    contactPtr->email[strcspn(contactPtr->email, "\n")] = '\0'; // Remove newline character

    printf("Enter age: ");
    scanf("%d\n", &contactPtr->age);

}

void displayContact(const struct Contact *contactPtr){

    printf("=== CONTACT DETAILS ===\n");
    printf("Name: %s\n", contactPtr->name);
    printf("Phone: %s\n", contactPtr->phone);
    printf("Email: %s\n", contactPtr->email);
    printf("Age: %d years old\n", contactPtr->age);
    printf("========================\n");

    printf("Name length: %zu characters\n", strlen(contactPtr->name));

    if (contactPtr->age >= 0 && contactPtr->age <= 12) {
        printf("Generation: Child\n");
    } else if (contactPtr->age > 13 && contactPtr->age <= 19) {
        printf("Generation: Teenager\n");
    } else if (contactPtr->age > 20 && contactPtr->age <= 39) {
        printf("Generation: Young Adult\n");
    } else if (contactPtr->age > 40 && contactPtr->age <= 59) {
        printf("Generation: Middle-aged Adult\n");
    } else if (contactPtr->age > 60){
        printf("Generation: Senior\n");
    }

    //strchr("@", const char *contactPtr->email) ? printf("Email is valid\n") : printf("Email is invalid\n");
    if (strchr(contactPtr->email, '@')) {
        printf("Email format: Valid\n");
    } else {
        printf("Email format: Invalid\n");
    }
}

int main() {
    // TODO: Create a Contact variable named person
    // struct Contact person;
    struct Contact *newContact = createContact();

    if (newContact == NULL) {
        printf("Failed to create contact\n");
        return -1;
    } else {
        printf("Contact initialized with default values\n");
    }

    populateContact(newContact);

    displayContact(newContact);
    
    free(newContact);

    printf("Program completed successfully\n");

    return 0;
}*/

/*
// TODO: Define the Contact struct here
struct Contact {
    char name[50];
    char phone[20];
    char email[40];
    int age;
};

struct Contact *createContact() {
    struct Contact *contactPtr = (struct Contact *)malloc(sizeof(struct Contact));

    contactPtr->age = 0;
    contactPtr->name[0] = '\0';
    contactPtr->phone[0] = '\0';
    contactPtr->email[0] = '\0';

    return contactPtr;
}

void populateContact(struct Contact *contactPtr) {
    // Read input values
    printf("Enter name: ");
    scanf("%s", contactPtr->name);
    printf("Enter phone: ");
    scanf("%s", contactPtr->phone);
    printf("Enter email: ");
    scanf("%s", contactPtr->email);
    printf("Enter age: ");
    scanf("%d", &contactPtr->age);

    if ((contactPtr->age < 0) || (contactPtr->age > 120)) { 
        printf("Invalid age entered\n");
    } else if (strlen(contactPtr->phone) < 10) {
        printf("Invalid phone number entered\n");
    } else {
        printf("Contact populated successfully\n");
    }

}

void displayContact(struct Contact *person){

    printf("Contact Information:\n");
    printf("Name: %s\n", person->name);
    printf("Phone: %s\n", person->phone);
    printf("Email: %s\n", person->email);
    printf("Age: %d\n", person->age);

}

int main() {
    // TODO: Create a Contact variable named person
    // struct Contact person;
    struct Contact *newContact = createContact();

    populateContact(newContact);

    displayContact(newContact);
    
    free(newContact);

    printf("Contact deleted successfully\n");

    return 0;
}*/

/*
// TODO: Define the Contact struct here
struct Contact {
    char name[50];
    char phone[20];
    char email[40];
    int age;
};

struct Contact *createContact() {
    struct Contact *contactPtr = (struct Contact *)malloc(sizeof(struct Contact));
    if (contactPtr == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    } else {
        printf("Contact created successfully\n");
    }

    contactPtr->age = 0;
    contactPtr->name[0] = '\0';
    contactPtr->phone[0] = '\0';
    contactPtr->email[0] = '\0';

    return contactPtr;
}

void displayContact(struct Contact *person){

    printf("Default Contact Values:\n");
    printf("Name: %s\n", person->name);
    printf("Phone: %s\n", person->phone);
    printf("Email: %s\n", person->email);
    printf("Age: %d\n", person->age);

}

int main() {
    // TODO: Create a Contact variable named person
    // struct Contact person;
    struct Contact *newContact = createContact();

    if (newContact == NULL) {
        printf("Failed to create contact\n");
    } else {
        printf("Contact initialized with default values\n");
    }

    displayContact(newContact);
    
    free(newContact);

    printf("Memory freed successfully\n");

    return 0;
}*/

/*
// TODO: Define the Contact struct here
struct Contact {
    char name[50];
    char phone[20];
    char email[40];
    int age;
};

void displayContact(struct Contact *person){

    printf("Contact Information:\n");
    printf("Name: %s\n", person->name);
    printf("Phone: %s\n", person->phone);
    printf("Email: %s\n", person->email);
    printf("Age: %d\n", person->age);
    printf("Name length: %d\n", strlen(person->name));
    printf("Category: %s\n", (person->age >= 0 && person->age <= 17) ? "Minor" :
                              (person->age > 17 && person->age <= 64) ? "Adult" : "Senior");
}

int main() {
    // TODO: Create a Contact variable named person
    struct Contact person;
    
    char name[50], phone[20], email[40];
    int age;

    // Read input values
    scanf("%s", name);
    scanf("%s", phone);
    scanf("%s", email);
    scanf("%d", &age);

    person.age = age;
    strncpy(person.name, name, sizeof(person.name) - 1);
    person.name[sizeof(person.name) - 1] = '\0';
    strncpy(person.phone, phone, sizeof(person.phone) - 1);
    person.phone[sizeof(person.phone) - 1] = '\0';
    strncpy(person.email, email, sizeof(person.email) - 1);
    person.email[sizeof(person.email) - 1] = '\0';
    
    // TODO: Write your validation and output code below
    if(person.age < 0 || person.age > 120) {
        printf("Invalid age");
        return 0;
    }
    if(strlen(person.phone) < 10){
        printf("Invalid phone number");
        return 0;
    }

    displayContact(&person);
    
    return 0;
}*/

/*
// TODO: Define the Employee struct here
struct Employee{
    int id;
    char name[50];
    char department[30];
    float salary;
    int yearsOfService;
};

// TODO: Implement fillEmployeeData function here
void fillEmployeeData(struct Employee *employee){
    
    // Read input values
    int id, yearsOfService;
    char name[50], department[30];
    float salary;
    
    scanf("%d", &id);
    scanf("%s", name);
    scanf("%s", department);
    scanf("%f", &salary);
    scanf("%d", &yearsOfService);
    
    // TODO: Assign input values to struct members using arrow operator
    employee->id = id;
    strncpy(employee->name, name, sizeof(employee->name) - 1);
        employee->name[sizeof(employee->name) - 1] = '\0';
    strncpy(employee->department, department, sizeof(employee->department) - 1);
        employee->department[sizeof(employee->department) - 1] = '\0';   
    employee->salary = salary;
    employee->yearsOfService = yearsOfService;

    // TODO: Bonus calculating
    float bonus;
    bonus = (yearsOfService >= 5) ? (salary * 0.1) : (salary * 0.05);

    // TODO: Salary + Bonus calculating
    employee->salary += bonus;
}

// TODO: Implement displayEmployee function here
void displayEmployee(struct Employee *employee){

    printf("Employee Details:\n");
    printf("ID: %d\n", employee->id);
    printf("Name: %s\n", employee->name);
    printf("Department: %s\n", employee->department);
    printf("Salary: %.2f\n", employee->salary);
    printf("Years of Service: %d\n", employee->yearsOfService);

}

// TODO: Implement promoteEmployee function here
void promoteEmployee(struct Employee *employee) {
    employee->salary *= 1.15;
    employee->yearsOfService++;
    printf("Employee promoted successfully!\n");
}

int main() {
    // TODO: Declare empPtr and allocate memory
    struct Employee *empPtr;
    empPtr = (struct Employee *)malloc(sizeof(struct Employee));

    // TODO: Check if memory allocation was successful
    if(empPtr == NULL){
        printf("Memory allocation failed\n");
    } else {
        printf("Memory allocation successful\n");
    }

    // TODO: Fill employee data, display initial data, promote, and display after promotion
    fillEmployeeData(empPtr);
    
    // TODO: Print employee information in the required format
    printf("Initial employee data:\n");
    displayEmployee(empPtr);

    // TODO: Pomote employee
    promoteEmployee(empPtr);

    // TODO: Print employee information After promotion
    printf("After promotion:\n");
    displayEmployee(empPtr);

    // TODO: Free memory and print success message
    free(empPtr);
    printf("Memory freed successfully");
    
    return 0;
}*/

/*
// TODO: Define the Car struct here
struct Car{
    int year;
    char brand[20];
    char model[25];
    float price;
    int mileage;
};

void printCarInfo(struct Car *carPtr, float depreciation) {

    printf("Car Information:\n");
    printf("Year: %d\n", carPtr->year);
    printf("Brand: %s\n", carPtr->brand);
    printf("Model: %s\n", carPtr->model);
    printf("Original Price: %.2f\n", carPtr->price);
    printf("Mileage: %d\n", carPtr->mileage);
    printf("Age: %d years\n", 2024 - carPtr->year);
    printf("Current Value: %.2f\n", carPtr->price * depreciation);
}

int main() {
    // TODO: Declare a pointer to Car struct named carPtr
    struct Car *carPtr;
    
    // TODO: Use malloc() to allocate memory for one Car struct
    carPtr = (struct Car *)malloc(sizeof(struct Car));

    // TODO: Check if memory allocation was successful
    if(carPtr == NULL){
        printf("Memory allocation failed\n");
    } else {
        printf("Memory allocation successful\n");
    }

    // Read input values
    int year, mileage;
    char brand[20], model[25];
    float price;
    
    scanf("%d", &year);
    scanf("%s", brand);
    scanf("%s", model);
    scanf("%f", &price);
    scanf("%d", &mileage);
    
    // TODO: Assign input values to struct members using arrow operator
    carPtr->year = year;
    strncpy(carPtr->brand, brand, sizeof(carPtr->brand) - 1);
        carPtr->brand[sizeof(carPtr->brand) - 1] = '\0';
    strncpy(carPtr->model, model, sizeof(carPtr->model) - 1);
        carPtr->model[sizeof(carPtr->model) - 1] = '\0';   
    carPtr->price = price;
    carPtr->mileage = mileage;

    // TODO: Calculate age, depreciation, and current value
    int age = 2024 - carPtr->year;
    float depreciation = (age > 10) ? 0.6 : 0.8;

    // TODO: Print car information in the required format
    printCarInfo(carPtr, depreciation);

    // TODO: Free the allocated memory and print success message
    free(carPtr);
    printf("Memory freed successfully");
    
    return 0;
}*/

/*
// TODO: Define the BankAccount struct here
struct BankAccount {
    int accountNumber;
    char ownerName[30];
    float balance;
    int transactionCount;
};

// TODO: Write the depositMoney function here
void depositMoney(struct BankAccount *ptrBankAcct, float summ){
    ptrBankAcct -> balance += summ;
    ptrBankAcct -> transactionCount++;
    printf("Deposit successful. New balance: %.2f\n", ptrBankAcct -> balance);
}

// TODO: Write the withdrawMoney function here
void withdrawMoney(struct BankAccount *ptrBankAcct, float summ){
    if(ptrBankAcct -> balance < summ){
        printf("Insufficient funds. Current balance: %.2f\n", ptrBankAcct -> balance);
    } else {
        ptrBankAcct -> balance -= summ;
        ptrBankAcct -> transactionCount++;
        printf("Withdrawal successful. New balance: %.2f\n", ptrBankAcct -> balance);
    }
}

// TODO: Write the displayAccount function here
void displayAccount(struct BankAccount *ptrBankAcct){
    printf("Account Information:\n");
    printf("Account Number: %d\n", ptrBankAcct -> accountNumber);
    printf("Owner: %s\n", ptrBankAcct -> ownerName);
    printf("Balance: %.2f\n", ptrBankAcct -> balance);
    printf("Transactions: %d\n", ptrBankAcct -> transactionCount);
}

int main() {
    // Read input
    int accountNum;
    char ownerName[30];
    float initialBalance;
    float depositAmount;
    float withdrawAmount;
    
    scanf("%d", &accountNum);
    scanf("%s", ownerName);
    scanf("%f", &initialBalance);
    scanf("%f", &depositAmount);
    scanf("%f", &withdrawAmount);
    
    // TODO: Create BankAccount variable and initialize it
    struct BankAccount account;
        account.accountNumber = accountNum;
        strncpy(account.ownerName, ownerName, sizeof(account.ownerName) - 1);
        account.ownerName[sizeof(account.ownerName) - 1] = '\0';
        account.balance = initialBalance;
        account.transactionCount = 0;

    // TODO: Call displayAccount to show initial state
    displayAccount(&account);
    
    // TODO: Call depositMoney with deposit amount
    depositMoney(&account, depositAmount);
    
    // TODO: Call withdrawMoney with withdrawal amount
    withdrawMoney(&account, withdrawAmount);

    // TODO: Call displayAccount to show final state
    displayAccount(&account);
    
    return 0;
}*/

/*
// TODO: Define the Rectangle struct here
struct Rectangle {
    int width;
    int height;
    char color[15];
};

// TODO: Write the displayRectangle function here
void displayRectangle (struct Rectangle rectangle) {
    printf("Rectangle Details:\n");
    printf("Width: %d\n", rectangle.width);
    printf("Height: %d\n", rectangle.height);
    printf("Color: %s\n", rectangle.color);
    printf("Area: %d\n", rectangle.width * rectangle.height);
}

// TODO: Write the modifyRectangle function here
void modifyRectangle (struct Rectangle rectangle) {
    rectangle.width *= 2;
    rectangle.height *= 2;
    strncpy(rectangle.color, "Modified", sizeof(rectangle.color) - 1);
    rectangle.color[sizeof(rectangle.color) - 1] = '\0';
    printf("Inside modifyRectangle function:\n");
    displayRectangle(rectangle);
}

int main() {
    // Read input
    int width, height;
    char color[15];
    
    scanf("%d", &width);
    scanf("%d", &height);
    scanf("%s", color);
    
    // TODO: Create Rectangle variable and assign input values
    struct Rectangle redRect;
    redRect.width = width;
    redRect.height = height;
    strncpy(redRect.color, color, sizeof(redRect.color) - 1);
    redRect.color[sizeof(redRect.color) - 1] = '\0';
    
    // TODO: Print "Original rectangle:" and call displayRectangle
    printf("Original rectangle:\n");
    displayRectangle(redRect);
    
    // TODO: Call modifyRectangle
    modifyRectangle(redRect);
    
    // TODO: Print "After modifyRectangle call:" and call displayRectangle again
    printf("After modifyRectangle call:\n");
    displayRectangle(redRect);

    return 0;
}*/

/*
// TODO: Define the Book struct here
struct Book {
    int id;
    char title [40];
    char author [30];
    float price;
    int pages;
};

int main() {
    // TODO: Create a Book variable named myBook
    struct Book myBook;
    
    // TODO: Declare a pointer to Book named bookPtr
    struct Book *bookPtr;
    
    // TODO: Assign the address of myBook to bookPtr
    bookPtr = &myBook;
    
    / Read input values
    int id;
    char title[40];
    char author[30];
    float price;
    int pages;
    
    scanf("%d", &id);
    scanf("%s", title);
    scanf("%s", author);
    scanf("%f", &price);
    scanf("%d", &pages);
    
    // TODO: Assign the input values to struct members using arrow operator
    bookPtr->id = id;
    strcpy(bookPtr->title, title);
    strcpy(bookPtr->author, author);
    bookPtr->price = price;
    bookPtr->pages = pages;
    
    // TODO: Apply 10% discount to price using arrow operator
    bookPtr->price = bookPtr->price * 0.9;
    
    // TODO: Add 50 bonus pages using arrow operator
    bookPtr->pages += 50;
    
    // TODO: Print book information using arrow operator
    printf("Book Information:\n");
    printf("ID: %d\n", bookPtr->id);
    printf("Title: %s\n", bookPtr->title);
    printf("Author: %s\n", bookPtr->author);
    printf("Price: %.2f\n", bookPtr->price);
    printf("Pages: %d\n", bookPtr->pages);
    
    // TODO: Calculate and print price per page using arrow operator
    printf("Price per page: %.2f\n", bookPtr->price / bookPtr->pages);

    return 0;
}*/

/*
// TODO: Define the Product struct here
struct Product {
    int id;
    char name[25];
    float price;
    int quantity;
};

int main() {
    // TODO: Write your code here
    
    // 1. Create and initialize the Product variable 'item'
    struct Product item = {501, "Laptop", 899.99, 15};
    
    // 2. Declare a pointer to Product named 'itemPtr'
    struct Product *itemPtr;
    
    // 3. Assign the address of 'item' to 'itemPtr'
    itemPtr = &item;
    
    // 4. Print original product info using dot operator
    printf("Original Product Info:\n");
    printf("ID: %d\n", item.id);
    printf("Name: %s\n", item.name);
    printf("Price: %.2f\n", item.price);
    printf("Quantity: %d\n", item.quantity);
    
    // 5. Print product info via pointer using (*itemPtr).member
    printf("Product Info via Pointer:\n");
    printf("ID: %d\n", (*itemPtr).id);
    printf("Name: %s\n", (*itemPtr).name);
    printf("Price: %.2f\n", (*itemPtr).price);
    printf("Quantity: %d\n", (*itemPtr).quantity);  
    
    // 6. Print and verify addresses
    printf("Address of item: %p\n", &item);
    printf("Value of itemPtr: %p\n", itemPtr);
    printf("Address verification: %p\n", &(item.id));

    return 0;
}*/

/*
// TODO: Define the Student struct here
struct Student {
    int id;
    float grade;
};

int main() {
    // TODO: Create a Student variable named student1
    struct Student student1;

    // Read input
    int id;
    float grade;
    scanf("%d", &id);
    scanf("%f", &grade);
    
    // TODO: Store the input values in the struct members
    student1.id = id;
    student1.grade = grade;

    // TODO: Implement grade validation and bonus calculation
    student1.grade = (student1.grade < 0) ? 0 : (student1.grade > 100) ? 100 : student1.grade;
    float bonus = student1.grade + 5.0;
    bonus = (bonus > 100) ? 100 : bonus;

    // TODO: Determine grade status
    char grade_status[20];
    if (student1.grade >= 90) {
        strcpy(grade_status, "Excellent");
    } else if (student1.grade >= 80.0 && student1.grade < 90) {
        strcpy(grade_status, "Good");
    } else if (student1.grade >= 70.0 && student1.grade < 80) {
        strcpy(grade_status, "Average");
    } else {
        strcpy(grade_status, "Needs Improvement");
    }

    // Output the results
    printf("Student Information:\n");
    printf("ID: %d\n", student1.id);
    printf("Original Grade: %.1f\n", student1.grade);
    printf("Bonus Grade: %.1f\n", bonus);
    printf("Grade Status: %s\n", grade_status);

    return 0;
}*/

/*// TODO: Define the Employee struct here
struct Employee{
    int id;
    char department[15];
    int yearsOfService;
    float salary;
};

int main() {
    // TODO: Create three Employee variables using initializer lists
    struct Employee emp1 = {101, "Engineering", 5, 75000.50};
    struct Employee emp2 = {102, "Marketing", 3, 65000.25};
    struct Employee emp3 = {103, "Sales", 8, 80000.75};
    
    // TODO: Print information for each employee
    printf("Employee 1:\n");
    printf("ID: %d\n", emp1.id);
    printf("Department: %s\n", emp1.department);
    printf("Years of Service: %d\n", emp1.yearsOfService);
    printf("Salary: %.2f\n", emp1.salary);

    printf("Employee 2:\n");
    printf("ID: %d\n", emp2.id);
    printf("Department: %s\n", emp2.department);
    printf("Years of Service: %d\n", emp2.yearsOfService);
    printf("Salary: %.2f\n", emp2.salary);

    printf("Employee 3:\n");
    printf("ID: %d\n", emp3.id);
    printf("Department: %s\n", emp3.department);
    printf("Years of Service: %d\n", emp3.yearsOfService);
    printf("Salary: %.2f\n", emp3.salary);

    // TODO: Calculate and print total salary and average years of service
    float totalSalary = emp1.salary + emp2.salary + emp3.salary;
    float averageYearsOfService = (float)(emp1.yearsOfService + emp2.yearsOfService + emp3.yearsOfService) / 3;

    printf("Total Salary: %.2f\n", totalSalary);
    printf("Average Years of Service: %.2f\n", averageYearsOfService);

    return 0;
}*/

/*
// TODO: Define the Car struct here
struct Car {
    int year;
    char brand[20];
    int mileage;
    float price;
};

int main() {
    // TODO: Create a Car variable named myCar
    Car myCar;

    // Read input values
    int year;
    char brand[20];
    int mileage;
    float price;

    scanf("%d", &year);
    scanf("%s", brand);
    scanf("%d", &mileage);
    scanf("%f", &price);

    // TODO: Assign the input values to struct members using dot operator
    myCar.year = year;
    strcpy(myCar.brand, brand);
    myCar.mileage = mileage;
    myCar.price = price;

    // TODO: Modify the mileage and price as specified
    myCar.mileage += 1000;
    myCar.price -= 500.0;

    // TODO: Print the car details using dot operator
    printf("Car Details:\n");
    
    // Print Year, Brand, Mileage, and Price here
    printf("Year: %d\n", myCar.year);
    printf("Brand: %s\n", myCar.brand);
    printf("Mileage: %d\n", myCar.mileage);
    printf("Price: %.2f\n", myCar.price);

    return 0;
}*/

/*
int main() {
    // TODO: Define your Book struct here
    struct Book {
        int id;
        char title[50];
        int pages;
        float price;
    };

    // Print confirmation message
    printf("Book struct defined successfully!\n");

    // TODO: Print the size of the Book struct and its members
    printf("Size of Book struct: %d bytes\n", sizeof(struct Book));
    printf("Size of id: %d bytes\n", sizeof(((struct Book*)0)->id));
    printf("Size of title: %d bytes\n", sizeof(((struct Book*)0)->title));
    printf("Size of pages: %d bytes\n", sizeof(((struct Book*)0)->pages));
    printf("Size of price: %d bytes\n", sizeof(((struct Book*)0)->price));

    return 0;
}*/

/*
int main() {
    int n;
    int sum = 0;
	int min = 1000;
	float average = 0.0;
	int more_Than_Average = 0;
    
    // Read the size of the array
    scanf("%d", &n);

    // TODO: Write your code below
    
    // Use calloc() to allocate memory for the array
    int* arr = (int*)malloc(n * sizeof(int));
    
    // Check if allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return -1;
    }
    else {
        printf("Array of size %d created successfully!\n", n);
    }

    // Read and store the input values
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

	// Calculate the sum, minimum
    for (int i = 0; i < n; i++) {
        sum += arr[i];
		if (min > arr[i]) min = arr[i];
    }

	// Calculate average
	average = (float)sum / n;

	// Count how many numbers are greater than average
    for (int i = 0; i < n; i++) {
        if (arr[i] > average) more_Than_Average++;
    }

	// Print the results
    printf("Sum: %d\n", sum);
    printf("Minimum: %d\n", min);
    printf("Elements above average: %d\n", more_Than_Average);
    printf("Memory used: %d bytes\n", n * sizeof(int));

    // Free the allocated memory
    free(arr);
    printf("Memory successfully freed!\n");
    return 0;
}*/

/*
int main() {
    int size;
    int sum = 0;
    
    // Read the size of the array
    scanf("%d", &size);

    // TODO: Write your code below
    
    // Use calloc() to allocate memory for the array
    int* arr = (int*)calloc(size, (int)sizeof(int));
    
    // Check if allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return -1;
    }
    else {
        printf("Memory allocated and initialized to zero!\n");
    }
    
    // Print initial values (should be zero)
    printf("Initial values: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
	printf("\n");
    
    // Read and store the input values
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Print updated values
    printf("Updated values: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
        sum += arr[i];
    }
    
    // Calculate and print the sum
    printf("\nSum: %d\n", sum);
    
    // Free the allocated memory
    free(arr);  // Free the allocated memory
    printf("Memory freed!\n");

    return 0;
}*/

/*int main() {
    int count;
    int max = -1000;
    int sum = 0;
    
    // Read the number of integers to store
    scanf("%d", &count);

    // TODO: Write your code below
    
    // 1. Allocate memory using malloc() with sizeof()
    int *arr = (int*)malloc(count * (int)sizeof(int));
    
    // 2. Check if allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return -1;
    }
    else {
        printf("Memory allocated successfully!\n");
    }
    
    // 3. Read the integer values and store them
    for (int i = 0; i < count; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
        if (max < arr[i]) max = arr[i];
    }
    
    // 4. Calculate sum and find maximum
    printf("Sum: %d\n", sum);
    printf("Maximum: %d\n", max);

    // 5. Free the allocated memory
    free(arr);  // Free the allocated memory
    printf("Memory freed successfully!\n");

    return 0;
}*/

/*int main() {
    // Read the number of integers
    int n;
    scanf("%d", &n);

    int sum = 0;
    
    // TODO: Write your code here
    
    // - Use malloc() to allocate memory for n integers
    int* arr = (int*)malloc(n * sizeof(int));
    
    // - Check if allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return -1;
    }
    else {
        printf("Memory allocation successful!\n");
    }
    
    // - Handle both success and failure cases
    
    // - Read the integers and store them
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    // - Calculate the sum and bytes allocated
    printf("Sum: %d\n", sum);
    printf("Bytes allocated: %d\n", n * sizeof(int));

    // Free the allocated memory
    free(arr);  

    return 0;
}*/

/*
int main() {
    // Read the number of elements
    int n;
    scanf("%d", &n);

    double max = -1000.0;
    double sum = 0;

    // TODO: Write your code below
    
    // 1. Allocate memory for n double values using malloc() and sizeof()
    
    // 2. Cast the returned pointer to double*
    double* arr = (double*)malloc(n * sizeof(double));
    
    // 3. Read n double values and store them in the allocated array
    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
        if (max < arr[i]) {
            max = arr[i];
        }
        sum += arr[i];
    }
    
    // 4. Calculate and print memory allocated in bytes
    printf("Memory allocated: %d bytes\n", n * sizeof(double));
    
    // 5. Calculate and print the average with 2 decimal places
    printf("Average: %0.2f\n", sum / (double)n);
    
    // 6. Find and print the largest value with 2 decimal places
    printf("Average: %0.2f\n", max);

    return 0;
}*/

/*
int main() {
    // Read input
    int input_value;
    scanf("%d", &input_value);

    // TODO: Write your code below
    
    // 1. Use malloc() to allocate memory for one integer
    int* mem_adress_ptr;
    
    // 2. Cast the returned pointer to int*
    mem_adress_ptr = (int*)malloc(4);
    
    // 3. Store the input value in the allocated memory
    *mem_adress_ptr = input_value;
    
    // 4. Print the stored value
    printf("Stored value: %d\n", *mem_adress_ptr);
    
    // 5. Calculate and store the square in the same location
    *mem_adress_ptr = *mem_adress_ptr * *mem_adress_ptr;
    
    // 6. Print the squared value
    printf("Squared value: %d\n", *mem_adress_ptr);

    return 0;
}*/

/*
// TODO: Write your findMinMax function here
void findMinMax(int arr[], int size, int* minValue, int* maxValue) {
	*minValue = arr[0];
	*maxValue = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] < *minValue) *minValue = arr[i];
        if (arr[i] > *maxValue) *maxValue = arr[i];
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int minValue, maxValue;

    // TODO: Call the findMinMax function here
    findMinMax(arr, n, &minValue, &maxValue);

    printf("Minimum: %d\n", minValue);
    printf("Maximum: %d\n", maxValue);

    return 0;
}*/

/*
// TODO: Create the analyzeTemperatures function here
void analyzeTemperatures(int temperatures[], int size) {
    int hi_temp = -275;
    int days_temp_hi_25 = 0;
    int temp_sum = 0;
    for (int i = 0; i < size; i++) {
        temp_sum += temperatures[i];
        if (hi_temp < temperatures[i]) {
            hi_temp = temperatures[i];
        }
        if (temperatures[i] > 25) {
            days_temp_hi_25++;
        }

    }
    printf("Average temperature: %0.1f\n", temp_sum / (float)size);
    printf("Highest temperature: %d\n", hi_temp);
    printf("Days above 25 degrees: %d\n", days_temp_hi_25);
}

int main() {
    // Read number of temperature readings
    const int n = 8;
    
    scanf("%d", &n);

    // Declare array to store temperatures
    int temperatures[n];

    // Read temperature values
    for (int i = 0; i < n; i++) {
        scanf("%d", &temperatures[i]);
    }

    // TODO: Call the analyzeTemperatures function here
    analyzeTemperatures(temperatures, n);

    return 0;
}*/

/*
// TODO: Write your swap function here
void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int a, b;

    // Read input
    scanf("%d", &a);
    scanf("%d", &b);

    // Print original values
    printf("Before swap: a = %d, b = %d\n", a, b);

    // TODO: Call your swap function here
    swap(&a, &b);

    // Print swapped values
    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}*/

/*
// TODO: Write your tripleValue function here
void tripleValue(int* ptr) {
    *ptr = *ptr * 3;
    printf("Value tripled to: %d\n", *ptr);
}

int main() {
    // TODO: Write your code here
    
    // Declare and initialize the number variable
    int number = 8;
    
    // Print the original value
    printf("Original value: %d\n", number);
    
    // Call the tripleValue function
    tripleValue(&number);
    
    // Print the final value
    printf("Final value: %d\n", number);

    return 0;
}*/

/*
// TODO: Write your displayValue function here
void displayValue(int* ptr) {
    printf("Value at address: %d\n", *ptr);
}

int main() {
    // TODO: Write your code here
    
    // 1. Declare and initialize the number variable
    int number = 42;
    
    // 2. Print the original value
    printf("Original value: %d\n", number);
    
    // 3. Call the displayValue function
    displayValue(&number);
    
    // 4. Print the completion message
    printf("Function call completed\n");

    return 0;
}*/

/*
// TODO: Write your tryToModify function here
void tryToModify(int number) {
    number += 50;
    printf("Inside function: %d\n", number);
}

int main() {
    // TODO: Write your code here
    
    // 1. Declare and initialize the original variable
    int original = 25;
    
    // 2. Print the value before function call
    printf("Before function call: %d\n", original);
    
    // 3. Call the tryToModify function
    tryToModify(original);
    
    // 4. Print the value after function call
    printf("After function call: %d\n", original);

    return 0;
}*/

/*int main() {
    // TODO: Write your code here
    
    // 1. Print the prompt message
    printf("Enter a sentence:");
    
    // 2. Declare a character array named 'sentence' with 200 elements
    char sentence[200];
	char sentence_upper[200];

    
    // 3. Read input using scanf with %s format specifier
    scanf("%s", sentence);
    
    // 4. Print the entered word and its length
    int length = strlen(sentence);
    
    //printf("You entered: %s\n", sentence);
    printf("Characters: %lu\n", length);
    
    //printf("Length: %lu\n", length);

    char vocal[10] = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
    int s_vowel = 0;

    for (int i = 0; i < length; i++) {
        for (int v = 0; v < 10; v++) {
            if (sentence[i] == vocal[v]) {
                s_vowel++;
            }
        }
    }

    for (int i = 0; i < length + 1; i++) {
        if (sentence[i] != '\0') {
            sentence_upper[i] = toupper(sentence[i]);
        }
        else {
            sentence_upper[i] = '\0';
            break;
        }
    }

    printf("Vowel count: %d\n", s_vowel);
    printf("Uppercase: %s\n", sentence_upper);

    return 0;
}*/

/*int main() {
    // TODO: Write your code here
    
    // 1. Print the prompt message
    printf("Enter a sentence: ");
    
    // 2. Declare a character array named 'sentence' with 200 elements
    char sentence[200];
    
    // 3. Read input using scanf with %s format specifier
    scanf("%s", sentence);
    
    // 4. Print the entered word and its length
    printf("You entered: %s\n", sentence);
    printf("Character count: %lu\n", strlen(sentence));
    printf("Length: %lu\n", strlen(sentence));

    return 0;
}*/

/*int main() {
    int n;
    scanf("%d", &n);

    char word1[100], word2[100];
    char combined[200];
    char longest_combined[200] = "";

    // TODO: Write your code here
    
    // Process each login attempt using strcmp() function
    for (int i = 0; i < n; i++) {
        // For each user:
        scanf("%s", word1);
        scanf("%s", word2);


		printf("Word 1: %s (Length: %d)\n", word1, strlen(word1));
        printf("Word 2: %s (Length: %d)\n", word2, strlen(word2));

        printf("Comparison: %s\n", 
            strcmp(word1, word2) == 0 ? "identical":"different");
        
        strcpy(combined, word1);
        strcat(combined, " ");
        strcat(combined, word2);

        printf("Combined: %s\n", combined);

        if (strlen(combined) > strlen(longest_combined)) {
            strcpy(longest_combined, combined);
        }
    }

    printf("Longest combined string: %s\n", longest_combined);

    return 0;
}*/

/*int main() {
    int n;
    scanf("%d", &n);

    char username[100];
    char password[100];
    int successful_logins = 0;

    // TODO: Write your code here
    
    // Process each login attempt using strcmp() function
    for (int i = 0; i < n; i++) {
        // For each user:
        char username[50];
        char password[50];
        scanf("%s", username);
        scanf("%s", password);

        if (strcmp(username, "admin") == 0 && strcmp(password, "secret123") == 0) {
            printf("Login successful\n");
            successful_logins++;
            continue;
        }
        else if (strcmp(username, "admin") == 0 && strcmp(password, "secret123") != 0) {
            printf("Invalid password\n");
            continue;
        }
        else if (strcmp(username, "admin") != 0 && strcmp(password, "secret123") == 0) {
            printf("Invalid username\n");
            continue;
        }
        else {
            printf("Invalid credentials\n");
        }
    }

    printf("Total successful logins: %d\n", successful_logins);

    return 0;
}*/

/*int main() {
    int n;
    scanf("%d", &n);

    // TODO: Write your code here
    
    // Use a loop to process n string operations
    for (int i = 0; i < n; i++) {
        // For each user:
        char name[50];
        char s_name[50];
        scanf("%s", name);
        scanf("%s", s_name);

        char fullName[100];
        strcpy(fullName, name);
        strcat(fullName, " ");
        strcat(fullName, s_name);

        printf("%s\n", fullName);

        char greeting[150];
        strcpy(greeting, "Hello, ");
        strcat(greeting, fullName);
        strcat(greeting, "! Welcome to our program.");

		printf("%s\n", greeting);
    }

	char summary[100];
	char numberStr[10];
	strcpy(summary, "Total people processed: ");
	sprintf(numberStr, "%d", n);
	strcat(summary, numberStr);
	printf("%s\n", summary);

    return 0;
}*/

/*int main() {
    int n;
    scanf("%d", &n);

    char source[100];
    char destination[100];

    // TODO: Write your code here
    
    // Use a loop to process n string operations
    for (int i = 0; i < n; i++) {
        // For each operation:
        // - Read the source string
        scanf("%s", source);
        // - Use strcpy() to copy source to destination
        strcpy(destination, source);
        // - Print both strings in the required format
        printf("Source: %s\n", source);
        printf("Destination: %s\n", destination);
    }
    
    // TODO: After the loop, modify the first character of the last destination
    // and print the modified string
    destination[0] = 'X';
    printf("Modified last destination: %s\n", destination);

    return 0;
}*/

/*int main() {
    // Read the number of words
    int n;
    scanf("%d", &n);

    // Variables to track totals
    int total_characters = 0;
    int max_length = 0;

    // TODO: Write your code here
    
    // Process each word using a loop
    for (int i = 0; i < n; i++) {
        // For each word:
        
        // - Declare a character array with 50 elements
        char word[50];
        
        // - Read the word using scanf
        scanf("%s", word);
        
        // - Calculate length using strlen()
        //size_t length = strlen((char *)word);
        int length = (int)strlen(word);
        
        // - Print the word and its length
        printf("Word: %s - Length: %d\n", word, length);
        
        // - Update total_characters and max_length
        total_characters += length;
        max_length = (max_length < length) ? length : max_length;
    }

    // Print final results
    printf("Total characters: %d\n", total_characters);
    printf("Longest word length: %d\n", max_length);

    return 0;
}*/

/*int main() {
    // TODO: Declare your character arrays here
    char username[30];
    char hobby[25];
    
    // TODO: Write your code here to prompt and read input
    printf("Enter your username:");
    scanf("%s", username);
    printf("Enter your hobby:");
    scanf("%s", hobby);
    
    // TODO: Print the final output message
    printf("Hello %s, your hobby is %s!", username, hobby);

    return 0;
}*/

/*int main() {
    // TODO: Write your code here
    
    // Declare and initialize the character arrays as specified
    char name[5] = { 'J', 'o', 'h', 'n', '\0' };
    char city[7] = { 'B', 'o', 's', 't', 'o', 'n', '\0' };
    char test[4] = { 'A', 'B', 'C', 'D' };

    // Print the results
    printf("Name: %s\n", name);
    printf("City: %s\n", city);
    printf("Test without null terminator: %s\n", test);

    return 0;
}*/

/*int main() {
    // TODO: Write your code here
    
    // Declare and initialize the character arrays as specified in the challenge
    char greeting[6] = "Hello";

    char message[20] = "Welcome";

    char word[] = "Programming";

    // Print the strings and their sizes
    printf("greeting: %s\n", greeting);
    printf("message: %s\n", message);
    printf("word: %s\n", word);
    printf("Size of greeting: %lu\n", sizeof(greeting));
    printf("Size of message: %lu\n", sizeof(message));
    printf("Size of word: %lu\n", sizeof(word));

    return 0;
}*/

/*
// TODO: Write your calculateSum function here
int calculateSum(int* arr, int size) {
    int sum = 0;
    int* ptr = arr;

    while (ptr < (arr + size)) {
        sum += *ptr;
        ptr++;
    }

    return sum;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // TODO: Call calculateSum function and store the result

    // TODO: Print the result in format "Sum: [value]"

    printf("Sum: %d", calculateSum(arr, n));

    return 0;
}*/

/*int main() {
    // TODO: Write your code below
    int scores[8] = { 45, 78, 92, 63, 87, 34, 91, 56 };

    int* start_ptr = scores;
    int* end_ptr = scores + 7;
    int* current_ptr = scores;

    while (current_ptr <= end_ptr) {
        if (*current_ptr >= 60 && *current_ptr <= 90) {
            printf("Value %d is in range\n", *current_ptr);
        }
        else {
            printf("Value %d is out of range\n", *current_ptr);
        }
        current_ptr++;
    }

    if (current_ptr > end_ptr) {
        printf("Traversal complete");
    }

    return 0;
}*/

/*int main() {
    // TODO: Write your code here
    
    // Declare and initialize the array 'data' with values {12, 24, 36, 48, 60}
    int data[5] = { 12, 24, 36, 48, 60 };
    
    // Declare pointer 'ptr' and initialize it to point to the first element
    int* ptr = data;
    
    // Use a for loop with pointer arithmetic to traverse the array
    for (int i = 0; i < 5; i++) {
        // Print each value and address, 
        printf("Value: %d, Address: %p\n", *ptr, ptr);
        // then increment the pointer
        ptr++;
    }
    ptr = data;
    
    // Reset the pointer and use pointer arithmetic to access specific elements
    
	printf("Third element: %d\n", *(ptr + 2));
    printf("Last element: %d\n", *(ptr + 4));

    return 0;
}*/

/*int main() {
    // TODO: Write your code here
    
    // Declare and initialize the array 'values' with 6 elements
    int values[6] = { 5, 15, 25, 35, 45, 55 };
    
    // Use a for loop to print each element using pointer notation *(values + i)
    for (int i = 0; i < 6; i++) {
        printf("Element %d: %d\n", i, (*(values + i)));
    }

    // After the loop, print the third element using both pointer and array notation
    printf("Third element via pointer: %d\n", *(values + 2));
    printf("Third element via array: %d\n", values[2]);

    return 0;
}*/

/*void square(int* p) {
    *p = *p * *p;
}

int main() {
    int value = 7;
	int* p = &value;

	square(p);

	printf("Square: %d", value);
    return 0;
}*/

//int main() {
//    int value = 42;
//
//    // ����� ������ ������ value � �������� �� � �������� p1
//    int* p1 = &value;
//
//    int** p2 = &p1;
//
//    **p2 = 100;
//
//    printf("Value: %d", value);
//
//    return 0;
//}

/*int main() {
    int a = 5, b = 10;

	int* pa, * pb; // ��������� �� ����� �����

	pa = &a; // ��������� � �������� ����� ���������� a
	pb = &b; // ��������� b �������� ����� ���������� b

	*pa += *pb; // ������ a = 15
	*pb = *pa - *pb; // ������ b = 5
    *pa -= *pb; // ������ a = 10

    printf("a = %d, b = %d", a, b);

    return 0;
}*/

//int main() {
//    int number = 10;
//    int* ptr = &number;
//    *ptr = 25;
//
//    printf("Change variable by pointer %d\n", number);
//
//    return 0;
//}

/*int main() {
    // TODO: Write your code here
    
    // 1. Declare and initialize the array 'numbers' with {10, 20, 30, 40}
    int numbers[4] = { 10, 20, 30, 40 };
    
    // 2. Declare a pointer to integer named 'ptr'
    int *ptr;
    
    // 3. Assign the array name to the pointer
	ptr = numbers;
    
    // 4. Print all the required addresses and values
	printf("Array name address: %p\n", (void*)numbers);
	printf("First element address: %p\n", (void*)&numbers[0]);
	printf("Pointer address: %p\n", (void*)ptr);
	printf("Value via array name: %d\n", *ptr);
    printf("Value via pointer: %d\n", *ptr);

    return 0;
}*/

/*int main() {
    // TODO: Write your code here
    
    // Declare variables and pointers
    int age = 25;
    char grade = 'A';
    float temperature = 98.6;

    // Assign addresses to pointers
    int* age_ptr = &age;
    char* grade_ptr = &grade;
    float* temp_ptr = &temperature;

    // Print values through pointers
    printf("Age: %d\n", *age_ptr);
    printf("Grade: %c\n", *grade_ptr);
    printf("Temperature: %.1f\n", *temp_ptr);

    // Modify values through pointers
    *age_ptr = 30;
    *grade_ptr = 'B';
    *temp_ptr = 99.5;

    // Print modified values from original variables
    printf("Age: %d\n", age);
    printf("Grade: %c\n", grade);
    printf("Temperature: %.1f\n", temperature);

    return 0;
}*/