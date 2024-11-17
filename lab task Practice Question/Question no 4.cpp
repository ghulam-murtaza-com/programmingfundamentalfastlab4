#include <stdio.h>
#include <string.h>

struct Flight {
    int flightNumber;
    char departureCity[20];
    char arrivalCity[20];
    char departureTime[10];
    char arrivalTime[10];
    int availableSeats;
};

struct Flight flights[100];
int flightCount = 0;

void addFlight();
void bookSeat();
void displayFlights();
void updateFlightDetails();

int main() {
    int choice;
    
    while (1) {
        printf("\nFlight Booking System:\n");
        printf("1. Add a Flight\n");
        printf("2. Book a Seat\n");
        printf("3. Display Available Flights\n");
        printf("4. Update Flight Details\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addFlight();
                break;
            case 2:
                bookSeat();
                break;
            case 3:
                displayFlights();
                break;
            case 4:
                updateFlightDetails();
                break;
            case 5:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

void addFlight() {
    if (flightCount < 100) {
        printf("Enter flight number: ");
        scanf("%d", &flights[flightCount].flightNumber);  
        printf("Enter departure city: ");
        scanf("%s", flights[flightCount].departureCity);     
        printf("Enter arrival city: ");
        scanf("%s", flights[flightCount].arrivalCity);  
        printf("Enter departure time (HH:MM): ");
        scanf("%s", flights[flightCount].departureTime);
        printf("Enter arrival time (HH:MM): ");
        scanf("%s", flights[flightCount].arrivalTime);
        printf("Enter number of available seats: ");
        scanf("%d", &flights[flightCount].availableSeats);       
        flightCount++;
        printf("Flight added successfully!\n");
    } else {
        printf("Flight limit reached. Cannot add more flights.\n");
    }
}

void bookSeat() {
    int flightNum, found = 0;
    printf("Enter flight number to book a seat: ");
    scanf("%d", &flightNum);
    for (int i = 0; i < flightCount; i++) {
        if (flights[i].flightNumber == flightNum) {
            if (flights[i].availableSeats > 0) {
                flights[i].availableSeats--;
                printf("Seat booked successfully! Seats remaining: %d\n", flights[i].availableSeats);
            } else {
                printf("No seats available on this flight.\n");
            }
            found = 1;
            break;
        }
    }if (!found) {
        printf("Flight not found.\n");
    }
}

void displayFlights() {
    char depCity[20], arrCity[20];
    printf("Enter departure city: "); scanf("%s", depCity);
    printf("Enter arrival city: "); scanf("%s", arrCity);
    printf("\nAvailable flights from %s to %s:\n", depCity, arrCity); int found = 0; 
    for (int i = 0; i < flightCount; i++) {
        if (strcmp(flights[i].departureCity, depCity) == 0 && strcmp(flights[i].arrivalCity, arrCity) == 0) {
            printf("Flight Number: %d\n", flights[i].flightNumber);
            printf("Departure Time: %s\n", flights[i].departureTime);
            printf("Arrival Time: %s\n", flights[i].arrivalTime);
            printf("Seats Available: %d\n", flights[i].availableSeats);
            found = 1;
        }
    }if (!found) {
        printf("No flights available between the specified cities.\n");
    }
}

void updateFlightDetails() {
    int flightNum, found = 0;
    printf("Enter flight number to update: ");
    scanf("%d", &flightNum); 
    for (int i = 0; i < flightCount; i++) {
        if (flights[i].flightNumber == flightNum) {
            printf("Enter new departure time (HH:MM): ");
            scanf("%s", flights[i].departureTime);           
            printf("Enter new arrival time (HH:MM): ");
            scanf("%s", flights[i].arrivalTime);            
            printf("Enter new number of available seats: ");
            scanf("%d", &flights[i].availableSeats);
            printf("Flight details updated successfully.\n");
            found = 1;
            break;
        }
    }if (!found) {
        printf("Flight not found.\n");
    }
}
