# Tic Tac Toe Game 🎮

A simple console-based Tic Tac Toe game developed in C++. This project allows two players to play Tic Tac Toe in the terminal with a user-friendly interface.

## Features

- Two-player gameplay (Player X vs Player O)
- Interactive console interface
- Automatic win detection
- Draw detection
- Option to replay the game after completion
- Simple and beginner-friendly C++ implementation

## Technologies Used

- C++
- Standard Library (`iostream`, `cstdlib`)

## How to Run

### Step 1: Compile the Program

Using g++:

```bash
g++ tic_tac_toe.cpp -o tic_tac_toe
```

### Step 2: Run the Program

Windows:

```bash
tic_tac_toe.exe
```

Linux/Mac:

```bash
./tic_tac_toe
```

## Game Rules

1. The game is played on a 3×3 grid.
2. Player X starts first.
3. Players take turns entering a position number (1–9).
4. The first player to align three symbols horizontally, vertically, or diagonally wins.
5. If all cells are filled and no player wins, the game ends in a draw.

## Board Layout

```text
 1 | 2 | 3
-----------
 4 | 5 | 6
-----------
 7 | 8 | 9
```

## Project Structure

```text
TicTacToe/
│
├── tic_tac_toe.cpp
└── README.md
```

## Learning Concepts

This project demonstrates:

- Arrays
- Functions
- Loops
- Conditional Statements
- Game Logic
- Input Validation

## Future Improvements

- Single-player mode against AI
- Score tracking
- Better UI design
- Cross-platform screen clearing
- Minimax algorithm implementation

## Author

Ayush Singh

---

⭐ If you like this project, don't forget to star the repository!
