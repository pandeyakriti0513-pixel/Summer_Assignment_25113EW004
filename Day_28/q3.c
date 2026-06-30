//Q.Write a program to create ticket booking system
#include<stdio.h>
#include<string.h>

#define TOTAL_SEATS 50

struct ticket
{
    int bookingID;
    char name[100];
    int seatsBooked;
};

struct ticket t[100];

int totalBookings = 0;
int availableSeats = TOTAL_SEATS;
int nextBookingID = 1;

void bookTicket()
{
    if(availableSeats == 0)
    {
        printf("\nSorry! No seats available.\n");
        return;
    }

    printf("\nEnter Passenger Name: ");
    getchar();
    fgets(t[totalBookings].name,sizeof(t[totalBookings].name),stdin);
    t[totalBookings].name[strcspn(t[totalBookings].name,"\n")] = '\0';

    printf("Enter Number of Seats: ");
    scanf("%d",&t[totalBookings].seatsBooked);

    if(t[totalBookings].seatsBooked <= 0)
    {
        printf("Invalid Number of Seats.\n");
        return;
    }

    if(t[totalBookings].seatsBooked > availableSeats)
    {
        printf("Only %d Seats Available.\n",availableSeats);
        return;
    }

    t[totalBookings].bookingID = nextBookingID++;

    availableSeats -= t[totalBookings].seatsBooked;

    printf("\nTicket Booked Successfully!\n");
    printf("Booking ID : %d\n",t[totalBookings].bookingID);

    totalBookings++;
}

void displayBookings()
{
    int i;

    if(totalBookings==0)
    {
        printf("\nNo Bookings Available.\n");
        return;
    }

    printf("\n========== BOOKING DETAILS ==========\n");

    for(i=0;i<totalBookings;i++)
    {
        printf("\nBooking %d\n",i+1);
        printf("Booking ID : %d\n",t[i].bookingID);
        printf("Passenger  : %s\n",t[i].name);
        printf("Seats      : %d\n",t[i].seatsBooked);
    }
}

void cancelTicket()
{
    int id,i,j;
    int found=0;

    printf("\nEnter Booking ID: ");
    scanf("%d",&id);

    for(i=0;i<totalBookings;i++)
    {
        if(t[i].bookingID==id)
        {
            availableSeats += t[i].seatsBooked;

            for(j=i;j<totalBookings-1;j++)
            {
                t[j]=t[j+1];
            }

            totalBookings--;

            printf("\nTicket Cancelled Successfully.\n");

            found=1;
            break;
        }
    }

    if(!found)
    {
        printf("\nBooking ID Not Found.\n");
    }
}

void availableSeatStatus()
{
    printf("\nTotal Seats     : %d\n",TOTAL_SEATS);
    printf("Booked Seats    : %d\n",TOTAL_SEATS-availableSeats);
    printf("Available Seats : %d\n",availableSeats);
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n====================================");
        printf("\n      TICKET BOOKING SYSTEM");
        printf("\n====================================");
        printf("\n1. Book Ticket");
        printf("\n2. Cancel Ticket");
        printf("\n3. Display Bookings");
        printf("\n4. Check Available Seats");
        printf("\n5. Exit");

        printf("\n\nEnter Your Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                bookTicket();
                break;

            case 2:
                cancelTicket();
                break;

            case 3:
                displayBookings();
                break;

            case 4:
                availableSeatStatus();
                break;

            case 5:
                printf("\nThank You!\n");
                return 0;

            default:
                printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}