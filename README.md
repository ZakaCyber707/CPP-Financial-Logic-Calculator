# C++ Financial Logic: Stock & Commission Calculator

<p align="center">
<img src="https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" />
<img src="https://img.shields.io/badge/Logic-Financial%20Arithmetic-blueviolet?style=for-the-badge" />
<img src="https://img.shields.io/badge/Difficulty-Beginner-orange?style=for-the-badge" />
<img src="https://img.shields.io/badge/License-MIT-green?style=for-the-badge" />
</p>

📊 Logic Overview
This project simulates a financial transaction module that calculates the total cost of a stock investment:

- **Base Cost Calculation:** Determines the initial investment amount by multiplying the share count by the current stock price ($21.77$).
- **Commission Logic:** Applies a standard **2% brokerage fee** to the transaction. The logic calculates the commission per share before scaling it to the total volume.
- **Aggregation:** Sums the base cost and the total commission to provide a final "out-of-pocket" investment figure.


🛠️ Features
- **Precision Handling:** Utilizes `float` data types to manage decimal values essential for financial accuracy.
- **Structured Output:** Clearly separates the "Stock Alone" cost from the "Commission Fee" to provide a transparent breakdown to the user.
- **Variable Scalability:** The core logic can be easily updated to reflect changing stock prices or different commission percentages.

🚀 Execution Guide
1. **Compile:** `g++ stock_commission_calc.cpp -o FinanceDemo`
2. **Run:** `./FinanceDemo`
3. **Observation:** Review the console output to see the breakdown of the $13,062.00 base cost and the associated fees.

---
**Author:** Muhammad Zaka | Cyber Security Analyst & Tech Educator
