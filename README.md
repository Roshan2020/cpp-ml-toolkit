# 🚀 Machine Learning Toolkit in C++

**Author:** Roshan Indika Menik Arachchi Menik Arachchige  
**Course:** EE5102 / EE4953 – Engineering Programming  
**Semester:** Spring 2026  

---

## 📌 Project Overview
This project presents the design and implementation of a lightweight **Machine Learning Toolkit in C++**, developed from scratch without relying on external machine learning libraries.

The primary goal is to understand the mathematical foundations and algorithmic implementation of machine learning models, specifically regression techniques, using modern C++ and object-oriented programming.

---

## 🎯 Objectives
- Implement core machine learning algorithms manually
- Apply numerical optimization techniques (Gradient Descent)
- Practice object-oriented design in C++
- Work with real datasets using file input/output
- Evaluate model performance using standard metrics

---

## ⚙️ Features
- ✅ Linear Regression using Gradient Descent  
- ✅ Logistic Regression for Classification  
- ✅ CSV Dataset Loader and Preprocessing  
- ✅ Model Evaluation Metrics:
  - Mean Squared Error (MSE)
  - Accuracy  
- ✅ Command-Line Interface (CLI)  

---

## 🧱 Project Structure

```text
cpp-ml-toolkit/
│
├── data/                  # Input datasets (CSV format)
├── include/               # Header files
│   ├── Model.h
│   ├── LinearRegression.h
│   ├── LogisticRegression.h
│   └── Dataset.h
│
├── src/                   # Source files
│   ├── LinearRegression.cpp
│   ├── LogisticRegression.cpp
│   ├── Dataset.cpp
│   └── main.cpp
│
├── docs/                  # Report & screenshots
├── README.md
├── CMakeLists.txt
└── .gitignore
```

---

## 🛠️ Technologies Used
- **C++ (Modern C++)**
- **Standard Template Library (STL)**
  - `std::vector`
  - `std::string`
  - `std::accumulate`
  - `std::transform`
- File I/O (CSV parsing)
- Object-Oriented Programming:
  - Encapsulation
  - Inheritance
  - Polymorphism

---

## 🧮 Implemented Models

### 🔹 Linear Regression
- Predicts continuous values
- Uses **Gradient Descent** to minimize error
- Evaluated using **Mean Squared Error (MSE)**

### 🔹 Logistic Regression
- Used for binary classification
- Applies **Sigmoid function**
- Evaluated using **Accuracy**

---

## ⚙️ Build & Run Instructions

### ▶️ Option 1: Using g++

```bash
g++ src/*.cpp -o ml_toolkit
./ml_toolkit
```

### ▶️ Option 2: Using CMake (Recommended)

```bash
mkdir build
cd build
cmake ..
make
./ml_toolkit
```

---

## 📊 Example Workflow
1. Load dataset from CSV file  
2. Initialize model (Linear / Logistic Regression)  
3. Train model using Gradient Descent  
4. Evaluate performance (MSE / Accuracy)  
5. Output results to console  

---

## 📈 Sample Output

```text
Training Linear Regression...
Iterations: 1000
Final Loss (MSE): 0.0234

Training Logistic Regression...
Accuracy: 92%
```

---

## 🔮 Future Improvements
- Regularization (L1 / L2)
- Polynomial Regression
- Feature Scaling / Normalization
- Multi-class Classification
- Visualization tools (graphs)

---

## 📄 License
This project is developed for academic purposes as part of coursework at  
**The University of Texas at San Antonio (UTSA)**.

---

## 🤝 Acknowledgment
Based on concepts from:
- *C++ Primer (5th Edition)*
- Machine Learning fundamentals and regression theory

---

#### End of Project Submission