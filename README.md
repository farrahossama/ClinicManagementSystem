Clinic Management System

Overview

This project implements a Clinic Management System in C programming language. It allows users to interact in two modes: Admin Mode and User Mode. Each mode provides specific functionalities tailored to the roles of administrators and regular users (patients).

Features:

Admin Mode:

Password Protected Access:

The system prompts for a password (default: 1234). Three incorrect attempts lead to system closure.

Patient Management:

Add New Patient Record:
Allows admins to add patient information including name, age, gender, and a unique ID. Limits to a maximum of 20 patients.

Edit Patient Record:
Admins can edit patient information by entering the patient's ID.

Slot Reservation:
Admins can reserve one of five available slots for a patient. Once reserved, the slot is marked and unavailable for subsequent reservations until canceled.

Reservation Cancellation:
Admins can cancel a reservation by entering the patient ID, making the slot available again.


User Mode:
Patient Data Viewing:
Users (patients) can view their own patient information by entering their ID.

Reservation Viewing:
Users can view their reserved slots for the day, if any.


Project Structure

Files and Functions

admin.c


Contains functions for admin mode functionalities like password verification, patient management, slot reservation, and cancellation.

user.c

Implements functionalities for user mode, including viewing patient data and reservations.

new_patient.c

Handles adding new patients to the system.

edit_patient.c

Allows admins to edit existing patient records.

reserve.c

Manages the reservation of slots for patients.

cancel.c

Handles the cancellation of reserved slots.

typedef.h

Defines data structures (patient and slots) and constants used throughout the project.

funcs.h

Declares all functions used in the project.


Contributors
Farah Ossama
