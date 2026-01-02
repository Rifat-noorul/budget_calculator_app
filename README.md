# Jammu & Kashmir Budget Calculator

## Description
This is a C-based Command Line Interface (CLI) application designed to help travelers estimate their trip budget for visiting Jammu & Kashmir. The program calculates the total cost and per-person cost based on user inputs regarding transportation, accommodation, and food preferences.

## Author
**Rifat N**

## Features
* **User-Friendly Interface:** Interactive menus for selecting preferences.
* **Input Validation:** Ensures the user enters valid numbers for days, passengers, and menu options.
* **Comprehensive Calculation:** Accounts for:
    * Mode of Transport (Volvo, Train, or Flight).
    * Accommodation Rating (2-star, 3-star, or 5-star).
    * Food Preferences (Veg, Dhaba style, or Veg & Non-Veg).
* **Fixed Expenses:** Includes a pre-calculated estimate for local travel expenses.
* **Per-Person Breakdown:** Calculates the average cost for each individual traveler.
* **Re-run Capability:** Allows the user to calculate multiple budgets in a single session without restarting the application.

## How It Works
The calculator uses the following logic to compute the total budget:

1.  **Transport Cost:** (Cost of selected mode) × (Number of Travelers)
2.  **Accommodation Cost:** (Cost of selected hotel tier) × (Number of Travelers) × (Number of Days)
3.  **Food Cost:** (Cost of selected food tier) × (Number of Travelers) × (Number of Days)
4.  **Local Travel:** A fixed flat rate of Rs. 19,500 is added to the grand total.

### Price Breakdown (Used in Code)
* **Transport (One-time cost per person):**
    * Volvo Bus: Rs. 4,000
    * Train: Rs. 2,500
    * Flight: Rs. 10,000
* **Accommodation (Per person, per night):**
    * 2-star Hotel: Rs. 1,500
    * 3-star Hotel: Rs. 3,000
    * 5-star Hotel: Rs. 7,000
* **Food (Per person, per day):**
    * Only Veg: Rs. 1,000
    * Dhaba: Rs. 2,000
    * Veg & Non-Veg: Rs. 2,750

## How to Compile and Run

### Prerequisites
* A C Compiler (GCC, Clang, or an IDE like Code::Blocks, Dev-C++, or VS Code).

### Instructions (using GCC)
1.  Save the code as `budget_calculator.c`.
2.  Open your terminal or command prompt.
3.  Navigate to the folder containing the file.
4.  Compile the code:
    ```bash
    gcc budget_calculator.c -o budget
    ```
5.  Run the executable:
    * **Windows:** `budget.exe`
    * **Linux/Mac:** `./budget`

## Example Usage

* No of Travelers(Passenger) 1-50 : 2 No of Days(Duration) 1 - 50 : 5
Mode of Transport: 1 for Volvo Bus : (4000) ... Enter number for Mode of Transport 1 - 3 : 1 ... (Program displays total costs based on selections)
## Notes
* The "Est Local Travel Expenses" is set as a constant macro (`#define p 19500`) and is added to the final total regardless of the number of people or days.

Wo
