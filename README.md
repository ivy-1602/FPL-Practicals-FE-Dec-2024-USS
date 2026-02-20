# 📝 FPL Practicals - FE Semester 1
## Fundamentals of Programming Language (SPPU)

These are my first C programs from college. Not C++. Just C. The old blue screen kind.  
Nothing fancy, just the basics done right.

---

## What's Here

Five assignments that taught me how to actually write code:

1. **Salary Calculator** - Math with money
2. **Fibonacci Series** - Understanding patterns
3. **Math Operations** - Square, square root, factorial
4. **Student Result** - Grading system with if-else
5. **String Operations** - Playing with text

---

## Running These

```bash
gcc filename.c -o filename
./filename

# Assignment 3 needs -lm (math library)
gcc 03_math_operations.c -o math -lm
./math
```

That's it. Compile, run, done.

---

## What I Learned

**Assignment 1** - Basic arithmetic, variables, float  
Started simple. Salary from basic pay. DA and HRA percentages. Got comfortable with `scanf`, `printf`, and not panicking when the screen is blue.

**Assignment 2** - Loops and sequences  
Fibonacci taught me how loops work. The `temp` variable trick for shifting values - simple idea, took me a minute to get it.

**Assignment 3** - Functions and math.h  
Three small programs: square, sqrt/cube, factorial. First time using an external library (`math.h`). Also first time I needed `-lm` to compile and had no idea why. Now I do.

**Assignment 4** - Decision making with if-else  
Student grading system. Multiple conditions, real logic. First time a program felt like it was doing something useful.

**Assignment 5** - Strings (char arrays, actually)  
Length, reverse, palindrome, compare. Realized strings in C are just character arrays. No magic. Just `\0` at the end and a lot of manual work.

---

## What Actually Helped

- **Start small** - These programs aren't complex. They don't need to be.
- **Test everything** - Run the code. See what breaks. Fix it.
- **Understand, don't memorize** - Why does factorial use a loop? Because you're multiplying n numbers together. That's it.
- **Read errors** - The compiler tells you exactly what's wrong. Usually.

---

## Common Mistakes I Made

1. Forgot semicolons (every beginner's story)
2. Didn't like the language itself
3. Didn't initialize variables
4. Didn't like the blue screen either
5. Overthought simple problems

## What's Different from the Original

Cleaned up a bit:

- Proper comments and problem statements in each file
- Used `gcc` instead of Turbo C (no `clrscr()`, no `getch()`, no `conio.h`)
- Better variable names
- Cleaner output formatting
- Manual string reverse instead of `strrev()` (works on all compilers, not just Turbo C)

But the core logic? Same. These are still the FE practicals you know.

---

## Why No `conio.h` / `clrscr()` / `getch()`?

The original code used Turbo C functions that only work on that old compiler.  
These programs are written to work on any modern compiler (GCC, MinGW, etc.).  
`clrscr()` clears the screen. We don't need it.  
`getch()` waits for a keypress. Also not needed outside labs.

---

## Looking Back

These programs are simple. That's the point.

You don't start with complex algorithms. You start with "how do I add two numbers?" and "how does a loop work?"

Six months later, I'm writing sorting algorithms and working with trees. But it started here. With salary calculations and Fibonacci series.

If you're in FE and thinking "everyone else is better at this" - they're not. Everyone starts confused. Some just hide it better.

Write the code. Break it. Fix it. Repeat. That's how you learn.

---

## Files

- `01_salary_calculator.c` - Calculate gross salary
- `02_fibonacci_series.c` - Generate Fibonacci sequence
- `03_math_operations.c` - Square, sqrt, factorial
- `04_student_result.c` - Grading system
- `05_string_operations.c` - Length, reverse, palindrome, compare

Each file has a problem statement, commented code, and sample output at the bottom.

---

## Requirements

- `gcc` compiler (any recent version)
- Basic understanding of C syntax
- Willingness to make mistakes

---
## About

**Uma Salunke**  
First Year Engineering - AI & ML  
Semester 2 (Dec 2023)

[LinkedIn](https://www.linkedin.com/in/umasalunke7) • [GitHub](https://github.com/ivy-1602) • [Email](mailto:umasalunke7@gmail.com)

---

## 📄 License

MIT License - Learn, use, share!

*ps. Made during FE Semester 1 while I was loving Mechanics more than FPL, SPPU.  
When everything was new and so was I, it made sense.*
