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
- ✅ Logistic Regression for Binary Classification  
- ✅ CSV Dataset Loader and Preprocessing  
- ✅ Feature Normalization (Min-Max Scaling)  
- ✅ Train/Test Dataset Splitting  
- ✅ Model Evaluation Metrics:
  - Mean Squared Error (MSE)
  - Accuracy  
- ✅ Interactive Command-Line Interface (CLI)  
- ✅ Modular Object-Oriented Design   

---

## 🧱 Project Structure

```text
cpp-ml-toolkit/
│
├── data/                      # Input datasets (CSV format)
├── docs/                      # Project report / screenshots
│
├── include/                   # Header files
│   ├── Model.h
│   ├── Dataset.h
│   ├── LinearRegression.h
│   ├── LogisticRegression.h
│   └── DataSplitter.h
│
├── src/                       # Source files
│   ├── main.cpp
│   ├── Dataset.cpp
│   ├── LinearRegression.cpp
│   ├── LogisticRegression.cpp
│   └── DataSplitter.cpp
│
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
- Algorithms:
  - `std::min`
  - `std::max`
  - Gradient Descent Optimization
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

## 🔄 Machine Learning Workflow

The toolkit follows a simplified machine learning pipeline:

1. Load dataset from CSV file  
2. Normalize feature values using Min-Max Scaling  
3. Split dataset into training and testing sets  
4. Train model using Gradient Descent  
5. Evaluate model performance using standard metrics  

This workflow mimics real-world machine learning preprocessing and evaluation practices.

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

### Example CLI Usage

```text
===== Machine Learning Toolkit =====

1. Load Dataset
2. Normalize Features
3. Train Linear Regression
4. Train Logistic Regression
5. Exit
```

### Typical Execution Steps
1. Load dataset  
2. Normalize features  
3. Select regression model  
4. Train model  
5. Evaluate performance on test data  

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
- Randomized dataset shuffling
- Model saving/loading
- Polynomial regression
- Multi-class classification
- Standardization (Z-score normalization)
- Data visualization support

---

## 📚 Key Learning Outcomes
This project demonstrates:
- Implementation of machine learning algorithms from scratch
- Use of object-oriented programming in C++
- Numerical optimization using Gradient Descent
- Dataset preprocessing and normalization
- Model evaluation using train/test splitting
- Modular software architecture design

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