# MOODLE Simulator

## Overview

This project presents a desktop application developed using C++/CLI and Windows Forms, designed to simulate a basic version of a learning management system like MOODLE. It provides a graphical user interface (GUI) for managing fundamental academic entities such as students (both undergraduate and postgraduate) and courses. Users can interact with the application to register new students and courses, view existing information, and potentially perform other related administrative tasks. The simulation focuses on core data management aspects, offering a simplified model of how student and course information might be handled within an educational context.

## Features

The MOODLE Simulator provides several key functionalities accessible through its graphical interface:

*   **Student Management:** Allows for the registration of new students, capturing details such as name, username, password, major, ID, and grades. It includes specific handling for postgraduate students, potentially capturing additional information like job titles.
*   **Course Management:** Enables the addition of new courses, recording information like course name, code, and cost.
*   **Information Display:** Provides sections or forms to view lists or details of registered students and courses.
*   **GPA Calculation:** Includes functionality within the student class structure to calculate a Grade Point Average (GPA) based on entered grades, although the exact implementation details within the GUI interaction require further exploration of the running application.
*   **Graphical User Interface:** Built with Windows Forms, offering a visual and interactive way to manage the simulated data through various forms and controls organized within a main navigation window.

## Technology Stack

The application is primarily built using:

*   **C++/CLI:** A set of C++ language extensions by Microsoft for programming on the .NET platform. This allows mixing native C++ code with managed .NET code.
*   **.NET Framework:** The application utilizes the System::Windows::Forms namespace, indicating it targets the .NET Framework for its GUI components.
*   **Microsoft Visual Studio:** The project structure, including `.sln`, `.vcxproj`, and `.vcxproj.filters` files, strongly suggests development within the Visual Studio IDE. The presence of an MSBuild workflow file (`.github/workflows/msbuild.yml`) further confirms this.

## Project Structure

The repository contains several key components:

*   **`MOODLE/` directory:** This appears to be the main project directory containing the core C++/CLI Windows Forms application.
    *   `MMODLE.sln`, `MMODLE.vcxproj`: Visual Studio solution and project files.
    *   `MyForm.h`, `MyForm.cpp`: Main navigation window form.
    *   `MyForm2.h`, `MyForm2.cpp`: Form likely used for student registration.
    *   `MyForm3.h`, `MyForm3.cpp`: Form likely used for course registration.
    *   `class.h`, `Class.cpp`: Contains the definitions and implementations for `CStudent`, `CCourse`, and `CPG_student` classes, representing the data models.
    *   `Loading.h`, `Loading.cpp`: Potentially a splash or loading screen form.
    *   `NumberSize.h`, `NumberSize.cpp`: Possibly related to data validation or specific UI elements.
*   **`Final2/` directory:** Contains another Visual Studio project (`FINAL2.vcxproj`). Its exact relationship to the main `MOODLE` project is unclear from the file structure alone; it might be an earlier version, a related component, or a separate experiment. It also contains student class definitions (`cstudent.h`, `cstudent.cpp`) which might overlap with or differ from those in the `MOODLE` directory.
*   **`.github/workflows/msbuild.yml`:** Defines a GitHub Actions workflow for building the project using MSBuild.
*   **`LICENSE`:** Contains the project's license information.
*   **`README.md`:** The original placeholder readme file.

## Setup and Building

To build and run this project, you will need:

1.  **Microsoft Visual Studio:** Install a version of Visual Studio (e.g., Visual Studio 2019 or later) that includes the ".NET desktop development" workload with C++/CLI support enabled.
2.  **.NET Framework:** Ensure the target .NET Framework version required by the project is installed on your system (this can usually be managed through the Visual Studio installer).

**Build Steps:**

1.  Clone or download the project repository.
2.  Open the `MOODLE.sln` file located in the `MOODLE/` directory using Visual Studio.
3.  Visual Studio should load the solution and its associated project(s).
4.  Select a build configuration (e.g., Debug or Release).
5.  Build the solution using the `Build > Build Solution` menu option (or by pressing F7).
6.  If the build is successful, the executable file will be generated in the corresponding output directory (e.g., `MOODLE/Debug/` or `MOODLE/Release/`).

## Usage

After successfully building the project:

1.  Navigate to the output directory where the executable file (e.g., `MMODLE.exe`) was created.
2.  Run the executable file.
3.  The application's main window (`MyForm`) should appear, potentially preceded by a loading screen (`Loading`).
4.  Use the navigation buttons (e.g., "Home", "Students", "Courses", "CPG") to switch between different sections of the application.
5.  Utilize the forms presented to register new students or courses by filling in the required fields and clicking the appropriate action buttons (e.g., "Register").
6.  Explore the different panels and sections to view the simulated data.

## Code Overview

The application follows a structure common for Windows Forms applications:

*   **Forms (`MyForm`, `MyForm2`, `MyForm3`, `Loading`, `NumberSize`):** These header files (`.h`) define the visual layout and components of the GUI windows, while the corresponding source files (`.cpp`) contain the event handling logic (e.g., what happens when a button is clicked).
*   **Data Models (`class.h`, `Class.cpp`):** Define the structure for storing student (`CStudent`), course (`CCourse`), and postgraduate student (`CPG_student`) data. These classes encapsulate the properties (like name, ID, code, cost) and methods (like `registerStudent`, `AddCourse`, `calculateGPA`) related to these entities.
*   **Main Entry Point:** Although not explicitly reviewed in the provided snippets, there will be an entry point (likely within one of the `.cpp` files like `MyForm.cpp` or a dedicated `main.cpp`) that initializes and runs the main application form (`MyForm`).

The use of C++/CLI allows direct interaction with .NET Framework components (like Windows Forms) while potentially leveraging C++ for underlying logic or data structures.
