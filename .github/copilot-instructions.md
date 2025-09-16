# AI Agent Instructions for CS2Q Class Work

This workspace contains coursework materials focused on web development (HTML/CSS) and Data Structures & Algorithms (C programming). Here's what you need to know to assist effectively:

## Project Structure

```
CSS/              # CSS styling exercises and examples
DSA/              # Data Structures & Algorithms implementations in C
forms(html)/      # HTML forms and basic web page examples
folder/           # Additional HTML practice files
```

## Development Environment

- C/C++ development using MinGW GCC compiler
- VS Code is configured for C/C++ development with debugging support
- HTML/CSS files can be edited directly and viewed in browser

### Build & Debug Configuration

- C files can be built using the default build task "C/C++: gcc.exe build active file"
- Debugger is configured for C/C++ with GDB
- Launch configuration available for debugging C programs

## Key Patterns & Conventions

### DSA Implementation Patterns
- Data structures are implemented in standard C using structs and pointers
- Example: `linked list.c` demonstrates the basic linked list implementation pattern:
  ```c
  struct Node {
      int data;
      struct Node* next;
  };
  ```

### HTML/CSS Organization
- CSS styles are organized in three approaches:
  1. External CSS files (e.g., `style1.css`, `style2.css`)
  2. Internal CSS using `<style>` tags
  3. Inline CSS using style attributes
- HTML files follow standard structure with proper DOCTYPE and meta tags

## Common Tasks

1. **Building C Programs**:
   ```json
   {
       "type": "cppbuild",
       "label": "C/C++: gcc.exe build active file",
       "command": "C:/MinGW/bin/gcc.exe"
   }
   ```

2. **Running C Programs**:
   - Build first using the build task
   - Run the generated .exe file
   - Use debugger for step-by-step execution

## Integration Points

1. **CSS Files**:
   - External stylesheets are linked using `<link>` tags
   - `@import` statements are used for CSS file dependencies

2. **HTML Forms**:
   - Forms use standard HTML5 input types
   - Tables are commonly used for form layouts
   - Example structure in `forms(html)/form1.html`

## Best Practices

1. **C Programming**:
   - Initialize pointers to NULL when declaring
   - Free allocated memory when no longer needed
   - Include proper header files

2. **Web Development**:
   - Use semantic HTML elements
   - Maintain consistent CSS naming conventions
   - Test pages in multiple browsers

Remember to consider the academic nature of this codebase when suggesting changes or improvements.