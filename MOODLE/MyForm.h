#pragma once
//#include "stdAfx.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "NumberSize.h"

namespace MMODLE {
    // Refrences that i use in my form 
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    // my form is inside a class that inherite functions from (System::Windows::Forms::Form) class
    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Panel^ navigateBar;
    protected:
    private: System::Windows::Forms::Panel^ window;

    private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
    private: System::Windows::Forms::Button^ btnStudent;
    private: System::Windows::Forms::Button^ btnCourses;
    private: System::Windows::Forms::Button^ btnHome;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::Button^ btnCPG;
    private: System::Windows::Forms::Panel^ Home;
    private: System::Windows::Forms::Panel^ CPG;
    private: System::Windows::Forms::Panel^ Courses;
    private: System::Windows::Forms::Panel^ Students;
    private: System::Windows::Forms::Button^ btnAddCourse;
    private: System::Windows::Forms::Button^ btnAddStd;
    private: System::Windows::Forms::Button^ btnAddPG;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Label^ label31;
    private: System::Windows::Forms::Label^ label32;
    private: System::Windows::Forms::Label^ label33;
    private: System::Windows::Forms::Label^ label34;
    private: System::Windows::Forms::Label^ label35;
    private: System::Windows::Forms::Label^ label36;
    private: System::Windows::Forms::PictureBox^ pictureBox7;
    private: System::Windows::Forms::Panel^ panel3;
    private: System::Windows::Forms::Label^ label37;
    private: System::Windows::Forms::Label^ label38;
    private: System::Windows::Forms::Label^ label39;
    private: System::Windows::Forms::Label^ label40;
    private: System::Windows::Forms::Label^ label41;
    private: System::Windows::Forms::Label^ label42;
    private: System::Windows::Forms::PictureBox^ pictureBox8;








    private: System::Windows::Forms::Panel^ panel6;
    private: System::Windows::Forms::Label^ label55;
    private: System::Windows::Forms::Label^ label56;
    private: System::Windows::Forms::Label^ label57;
    private: System::Windows::Forms::Label^ label58;
    private: System::Windows::Forms::Label^ label59;
    private: System::Windows::Forms::Label^ label60;
    private: System::Windows::Forms::PictureBox^ pictureBox11;
    private: System::Windows::Forms::Panel^ panel5;
    private: System::Windows::Forms::Label^ label49;
    private: System::Windows::Forms::Label^ label50;
    private: System::Windows::Forms::Label^ label51;
    private: System::Windows::Forms::Label^ label52;
    private: System::Windows::Forms::Label^ label53;
    private: System::Windows::Forms::Label^ label54;
    private: System::Windows::Forms::PictureBox^ pictureBox10;



    private: System::Windows::Forms::Panel^ panel7;
    private: System::Windows::Forms::Label^ label61;
    private: System::Windows::Forms::Label^ label62;
    private: System::Windows::Forms::Label^ label63;
    private: System::Windows::Forms::Label^ label64;
    private: System::Windows::Forms::Label^ label65;
    private: System::Windows::Forms::Label^ label66;
    private: System::Windows::Forms::PictureBox^ pictureBox12;
    private: System::Windows::Forms::Panel^ panel9;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::Panel^ panel8;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::Panel^ panel4;
    private: System::Windows::Forms::Label^ label43;
    private: System::Windows::Forms::Label^ label44;
    private: System::Windows::Forms::Label^ label45;
    private: System::Windows::Forms::Label^ label46;
    private: System::Windows::Forms::Label^ label47;
    private: System::Windows::Forms::Label^ label48;
    private: System::Windows::Forms::PictureBox^ pictureBox9;
    private: System::Windows::Forms::Panel^ panel11;
    private: System::Windows::Forms::Label^ label19;
    private: System::Windows::Forms::Label^ label20;
    private: System::Windows::Forms::Label^ label21;
    private: System::Windows::Forms::Label^ label22;
    private: System::Windows::Forms::Label^ label23;
    private: System::Windows::Forms::Label^ label24;
    private: System::Windows::Forms::PictureBox^ pictureBox5;
    private: System::Windows::Forms::Panel^ panel10;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::PictureBox^ pictureBox4;
    private: System::Windows::Forms::Label^ label28;
    private: System::Windows::Forms::Label^ label26;
    private: System::Windows::Forms::Label^ label29;
    private: System::Windows::Forms::Label^ label27;
    private: System::Windows::Forms::Label^ label25;
    private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
    private: System::Windows::Forms::Panel^ panel12;
    private: System::Windows::Forms::Label^ label68;
    private: System::Windows::Forms::Label^ label67;
    private: System::Windows::Forms::Label^ label30;
    private: System::Windows::Forms::Panel^ panel13;
    private: System::Windows::Forms::Label^ label69;
    private: System::Windows::Forms::Label^ label70;
    private: System::Windows::Forms::Label^ label71;
    private: System::Windows::Forms::Panel^ panel14;
    private: System::Windows::Forms::Label^ label72;
    private: System::Windows::Forms::Label^ label73;
    private: System::Windows::Forms::Label^ label74;
    private: System::Windows::Forms::Panel^ panel15;
    private: System::Windows::Forms::Label^ label75;
    private: System::Windows::Forms::Label^ label76;
    private: System::Windows::Forms::Label^ label77;
    private: System::Windows::Forms::Panel^ panel16;
    private: System::Windows::Forms::Label^ label78;
    private: System::Windows::Forms::Label^ label79;
    private: System::Windows::Forms::Label^ label80;
    private: System::Windows::Forms::PictureBox^ pictureBox6;
    private: System::Windows::Forms::PictureBox^ pictureBox13;
    private: System::Windows::Forms::PictureBox^ pictureBox14;
    private: System::Windows::Forms::PictureBox^ pictureBox15;
    private: System::Windows::Forms::PictureBox^ pictureBox16;





    protected:

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->navigateBar = (gcnew System::Windows::Forms::Panel());
            this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->btnHome = (gcnew System::Windows::Forms::Button());
            this->btnStudent = (gcnew System::Windows::Forms::Button());
            this->btnCourses = (gcnew System::Windows::Forms::Button());
            this->btnCPG = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->window = (gcnew System::Windows::Forms::Panel());
            this->Courses = (gcnew System::Windows::Forms::Panel());
            this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->panel12 = (gcnew System::Windows::Forms::Panel());
            this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
            this->label68 = (gcnew System::Windows::Forms::Label());
            this->label67 = (gcnew System::Windows::Forms::Label());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->panel13 = (gcnew System::Windows::Forms::Panel());
            this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
            this->label69 = (gcnew System::Windows::Forms::Label());
            this->label70 = (gcnew System::Windows::Forms::Label());
            this->label71 = (gcnew System::Windows::Forms::Label());
            this->panel14 = (gcnew System::Windows::Forms::Panel());
            this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
            this->label72 = (gcnew System::Windows::Forms::Label());
            this->label73 = (gcnew System::Windows::Forms::Label());
            this->label74 = (gcnew System::Windows::Forms::Label());
            this->panel15 = (gcnew System::Windows::Forms::Panel());
            this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
            this->label75 = (gcnew System::Windows::Forms::Label());
            this->label76 = (gcnew System::Windows::Forms::Label());
            this->label77 = (gcnew System::Windows::Forms::Label());
            this->panel16 = (gcnew System::Windows::Forms::Panel());
            this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
            this->label78 = (gcnew System::Windows::Forms::Label());
            this->label79 = (gcnew System::Windows::Forms::Label());
            this->label80 = (gcnew System::Windows::Forms::Label());
            this->Students = (gcnew System::Windows::Forms::Panel());
            this->panel11 = (gcnew System::Windows::Forms::Panel());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->panel10 = (gcnew System::Windows::Forms::Panel());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->panel9 = (gcnew System::Windows::Forms::Panel());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->panel8 = (gcnew System::Windows::Forms::Panel());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->panel7 = (gcnew System::Windows::Forms::Panel());
            this->label61 = (gcnew System::Windows::Forms::Label());
            this->label62 = (gcnew System::Windows::Forms::Label());
            this->label63 = (gcnew System::Windows::Forms::Label());
            this->label64 = (gcnew System::Windows::Forms::Label());
            this->label65 = (gcnew System::Windows::Forms::Label());
            this->label66 = (gcnew System::Windows::Forms::Label());
            this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
            this->CPG = (gcnew System::Windows::Forms::Panel());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->label55 = (gcnew System::Windows::Forms::Label());
            this->label56 = (gcnew System::Windows::Forms::Label());
            this->label57 = (gcnew System::Windows::Forms::Label());
            this->label58 = (gcnew System::Windows::Forms::Label());
            this->label59 = (gcnew System::Windows::Forms::Label());
            this->label60 = (gcnew System::Windows::Forms::Label());
            this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->label49 = (gcnew System::Windows::Forms::Label());
            this->label50 = (gcnew System::Windows::Forms::Label());
            this->label51 = (gcnew System::Windows::Forms::Label());
            this->label52 = (gcnew System::Windows::Forms::Label());
            this->label53 = (gcnew System::Windows::Forms::Label());
            this->label54 = (gcnew System::Windows::Forms::Label());
            this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->label37 = (gcnew System::Windows::Forms::Label());
            this->label38 = (gcnew System::Windows::Forms::Label());
            this->label39 = (gcnew System::Windows::Forms::Label());
            this->label40 = (gcnew System::Windows::Forms::Label());
            this->label41 = (gcnew System::Windows::Forms::Label());
            this->label42 = (gcnew System::Windows::Forms::Label());
            this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label43 = (gcnew System::Windows::Forms::Label());
            this->label44 = (gcnew System::Windows::Forms::Label());
            this->label45 = (gcnew System::Windows::Forms::Label());
            this->label46 = (gcnew System::Windows::Forms::Label());
            this->label47 = (gcnew System::Windows::Forms::Label());
            this->label48 = (gcnew System::Windows::Forms::Label());
            this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
            this->Home = (gcnew System::Windows::Forms::Panel());
            this->btnAddCourse = (gcnew System::Windows::Forms::Button());
            this->btnAddStd = (gcnew System::Windows::Forms::Button());
            this->btnAddPG = (gcnew System::Windows::Forms::Button());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->navigateBar->SuspendLayout();
            this->flowLayoutPanel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->window->SuspendLayout();
            this->Courses->SuspendLayout();
            this->flowLayoutPanel2->SuspendLayout();
            this->panel12->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
            this->panel13->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
            this->panel14->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
            this->panel15->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
            this->panel16->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
            this->Students->SuspendLayout();
            this->panel11->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            this->panel10->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            this->panel9->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            this->panel8->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->panel7->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
            this->CPG->SuspendLayout();
            this->panel6->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
            this->panel5->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
            this->panel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
            this->panel3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
            this->panel4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
            this->panel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // navigateBar
            // 
            this->navigateBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
                static_cast<System::Int32>(static_cast<System::Byte>(88)));
            this->navigateBar->Controls->Add(this->flowLayoutPanel1);
            this->navigateBar->Dock = System::Windows::Forms::DockStyle::Left;
            this->navigateBar->Location = System::Drawing::Point(0, 0);
            this->navigateBar->Name = L"navigateBar";
            this->navigateBar->Size = System::Drawing::Size(154, 631);
            this->navigateBar->TabIndex = 0;
            this->navigateBar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::navigateBar_Paint);
            // 
            // flowLayoutPanel1
            // 
            this->flowLayoutPanel1->Controls->Add(this->pictureBox1);
            this->flowLayoutPanel1->Controls->Add(this->btnHome);
            this->flowLayoutPanel1->Controls->Add(this->btnStudent);
            this->flowLayoutPanel1->Controls->Add(this->btnCourses);
            this->flowLayoutPanel1->Controls->Add(this->btnCPG);
            this->flowLayoutPanel1->Controls->Add(this->button4);
            this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Left;
            this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
            this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
            this->flowLayoutPanel1->Size = System::Drawing::Size(150, 631);
            this->flowLayoutPanel1->TabIndex = 0;
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(3, 3);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(138, 104);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 4;
            this->pictureBox1->TabStop = false;
            // 
            // btnHome
            // 
            this->btnHome->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->btnHome->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnHome->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnHome->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->btnHome->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHome.Image")));
            this->btnHome->Location = System::Drawing::Point(3, 113);
            this->btnHome->Name = L"btnHome";
            this->btnHome->Size = System::Drawing::Size(138, 113);
            this->btnHome->TabIndex = 1;
            this->btnHome->Text = L"Home";
            this->btnHome->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->btnHome->UseVisualStyleBackColor = true;
            this->btnHome->Click += gcnew System::EventHandler(this, &MyForm::btnHome_Click);
            // 
            // btnStudent
            // 
            this->btnStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnStudent->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnStudent->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->btnStudent->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnStudent.Image")));
            this->btnStudent->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
            this->btnStudent->Location = System::Drawing::Point(3, 232);
            this->btnStudent->Name = L"btnStudent";
            this->btnStudent->Size = System::Drawing::Size(138, 123);
            this->btnStudent->TabIndex = 2;
            this->btnStudent->Text = L"Student";
            this->btnStudent->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->btnStudent->UseVisualStyleBackColor = true;
            this->btnStudent->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            // 
            // btnCourses
            // 
            this->btnCourses->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnCourses->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnCourses->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->btnCourses->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCourses.Image")));
            this->btnCourses->Location = System::Drawing::Point(3, 358);
            this->btnCourses->Margin = System::Windows::Forms::Padding(3, 0, 3, 3);
            this->btnCourses->Name = L"btnCourses";
            this->btnCourses->Padding = System::Windows::Forms::Padding(0, 0, 0, 2);
            this->btnCourses->Size = System::Drawing::Size(138, 135);
            this->btnCourses->TabIndex = 0;
            this->btnCourses->Text = L"Courses";
            this->btnCourses->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->btnCourses->UseVisualStyleBackColor = true;
            this->btnCourses->Click += gcnew System::EventHandler(this, &MyForm::btnCourses_Click);
            // 
            // btnCPG
            // 
            this->btnCPG->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnCPG->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnCPG->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->btnCPG->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCPG.Image")));
            this->btnCPG->Location = System::Drawing::Point(3, 499);
            this->btnCPG->Name = L"btnCPG";
            this->btnCPG->Size = System::Drawing::Size(138, 139);
            this->btnCPG->TabIndex = 5;
            this->btnCPG->Text = L"CPG";
            this->btnCPG->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->btnCPG->UseVisualStyleBackColor = true;
            this->btnCPG->Click += gcnew System::EventHandler(this, &MyForm::btnCPG_Click);
            // 
            // button4
            // 
            this->button4->Location = System::Drawing::Point(3, 644);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(75, 23);
            this->button4->TabIndex = 3;
            this->button4->Text = L"button4";
            this->button4->UseVisualStyleBackColor = true;
            // 
            // window
            // 
            this->window->BackColor = System::Drawing::SystemColors::GrayText;
            this->window->Controls->Add(this->Home);
            this->window->Controls->Add(this->CPG);
            this->window->Controls->Add(this->Courses);
            this->window->Controls->Add(this->Students);
            this->window->Location = System::Drawing::Point(154, -3);
            this->window->Name = L"window";
            this->window->Size = System::Drawing::Size(894, 525);
            this->window->TabIndex = 1;
            // 
            // Courses
            // 
            this->Courses->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->Courses->BackColor = System::Drawing::SystemColors::GrayText;
            this->Courses->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Courses.BackgroundImage")));
            this->Courses->Controls->Add(this->flowLayoutPanel2);
            this->Courses->Location = System::Drawing::Point(-4, 0);
            this->Courses->Name = L"Courses";
            this->Courses->Size = System::Drawing::Size(898, 522);
            this->Courses->TabIndex = 3;
            this->Courses->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::Courses_Paint);
            // 
            // flowLayoutPanel2
            // 
            this->flowLayoutPanel2->BackColor = System::Drawing::Color::Transparent;
            this->flowLayoutPanel2->Controls->Add(this->panel12);
            this->flowLayoutPanel2->Controls->Add(this->panel13);
            this->flowLayoutPanel2->Controls->Add(this->panel14);
            this->flowLayoutPanel2->Controls->Add(this->panel15);
            this->flowLayoutPanel2->Controls->Add(this->panel16);
            this->flowLayoutPanel2->Location = System::Drawing::Point(10, 15);
            this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
            this->flowLayoutPanel2->Size = System::Drawing::Size(879, 489);
            this->flowLayoutPanel2->TabIndex = 0;
            this->flowLayoutPanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::flowLayoutPanel2_Paint);
            // 
            // panel12
            // 
            this->panel12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->panel12->Controls->Add(this->pictureBox6);
            this->panel12->Controls->Add(this->label68);
            this->panel12->Controls->Add(this->label67);
            this->panel12->Controls->Add(this->label30);
            this->panel12->Location = System::Drawing::Point(3, 3);
            this->panel12->Name = L"panel12";
            this->panel12->Size = System::Drawing::Size(283, 221);
            this->panel12->TabIndex = 0;
            this->panel12->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel12_Paint);
            // 
            // pictureBox6
            // 
            this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
            this->pictureBox6->Location = System::Drawing::Point(4, 3);
            this->pictureBox6->Name = L"pictureBox6";
            this->pictureBox6->Size = System::Drawing::Size(50, 54);
            this->pictureBox6->TabIndex = 3;
            this->pictureBox6->TabStop = false;
            // 
            // label68
            // 
            this->label68->AutoSize = true;
            this->label68->BackColor = System::Drawing::Color::Black;
            this->label68->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label68->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label68->Location = System::Drawing::Point(5, 168);
            this->label68->Name = L"label68";
            this->label68->Size = System::Drawing::Size(82, 34);
            this->label68->TabIndex = 2;
            this->label68->Text = L"Cost:";
            // 
            // label67
            // 
            this->label67->AutoSize = true;
            this->label67->BackColor = System::Drawing::Color::Black;
            this->label67->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label67->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label67->Location = System::Drawing::Point(7, 102);
            this->label67->Name = L"label67";
            this->label67->Size = System::Drawing::Size(92, 34);
            this->label67->TabIndex = 1;
            this->label67->Text = L"Code:";
            this->label67->Click += gcnew System::EventHandler(this, &MyForm::label67_Click);
            // 
            // label30
            // 
            this->label30->AutoSize = true;
            this->label30->BackColor = System::Drawing::Color::Black;
            this->label30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label30->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label30->Location = System::Drawing::Point(93, 28);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(91, 34);
            this->label30->TabIndex = 0;
            this->label30->Text = L"Name";
            // 
            // panel13
            // 
            this->panel13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->panel13->Controls->Add(this->pictureBox13);
            this->panel13->Controls->Add(this->label69);
            this->panel13->Controls->Add(this->label70);
            this->panel13->Controls->Add(this->label71);
            this->panel13->Location = System::Drawing::Point(292, 3);
            this->panel13->Name = L"panel13";
            this->panel13->Size = System::Drawing::Size(283, 221);
            this->panel13->TabIndex = 1;
            // 
            // pictureBox13
            // 
            this->pictureBox13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.BackgroundImage")));
            this->pictureBox13->Location = System::Drawing::Point(3, 3);
            this->pictureBox13->Name = L"pictureBox13";
            this->pictureBox13->Size = System::Drawing::Size(50, 54);
            this->pictureBox13->TabIndex = 4;
            this->pictureBox13->TabStop = false;
            // 
            // label69
            // 
            this->label69->AutoSize = true;
            this->label69->BackColor = System::Drawing::Color::Black;
            this->label69->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label69->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label69->Location = System::Drawing::Point(8, 170);
            this->label69->Name = L"label69";
            this->label69->Size = System::Drawing::Size(82, 34);
            this->label69->TabIndex = 2;
            this->label69->Text = L"Cost:";
            // 
            // label70
            // 
            this->label70->AutoSize = true;
            this->label70->BackColor = System::Drawing::Color::Black;
            this->label70->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label70->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label70->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label70->Location = System::Drawing::Point(8, 102);
            this->label70->Name = L"label70";
            this->label70->Size = System::Drawing::Size(92, 34);
            this->label70->TabIndex = 1;
            this->label70->Text = L"Code:";
            // 
            // label71
            // 
            this->label71->AutoSize = true;
            this->label71->BackColor = System::Drawing::Color::Black;
            this->label71->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label71->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label71->Location = System::Drawing::Point(85, 27);
            this->label71->Name = L"label71";
            this->label71->Size = System::Drawing::Size(91, 34);
            this->label71->TabIndex = 0;
            this->label71->Text = L"Name";
            // 
            // panel14
            // 
            this->panel14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->panel14->Controls->Add(this->pictureBox14);
            this->panel14->Controls->Add(this->label72);
            this->panel14->Controls->Add(this->label73);
            this->panel14->Controls->Add(this->label74);
            this->panel14->Location = System::Drawing::Point(581, 3);
            this->panel14->Name = L"panel14";
            this->panel14->Size = System::Drawing::Size(283, 221);
            this->panel14->TabIndex = 2;
            // 
            // pictureBox14
            // 
            this->pictureBox14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.BackgroundImage")));
            this->pictureBox14->Location = System::Drawing::Point(3, 3);
            this->pictureBox14->Name = L"pictureBox14";
            this->pictureBox14->Size = System::Drawing::Size(50, 54);
            this->pictureBox14->TabIndex = 4;
            this->pictureBox14->TabStop = false;
            // 
            // label72
            // 
            this->label72->AutoSize = true;
            this->label72->BackColor = System::Drawing::Color::Black;
            this->label72->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label72->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label72->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label72->Location = System::Drawing::Point(8, 170);
            this->label72->Name = L"label72";
            this->label72->Size = System::Drawing::Size(82, 34);
            this->label72->TabIndex = 2;
            this->label72->Text = L"Cost:";
            // 
            // label73
            // 
            this->label73->AutoSize = true;
            this->label73->BackColor = System::Drawing::Color::Black;
            this->label73->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label73->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label73->Location = System::Drawing::Point(8, 102);
            this->label73->Name = L"label73";
            this->label73->Size = System::Drawing::Size(92, 34);
            this->label73->TabIndex = 1;
            this->label73->Text = L"Code:";
            // 
            // label74
            // 
            this->label74->AutoSize = true;
            this->label74->BackColor = System::Drawing::Color::Black;
            this->label74->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label74->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label74->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label74->Location = System::Drawing::Point(85, 27);
            this->label74->Name = L"label74";
            this->label74->Size = System::Drawing::Size(91, 34);
            this->label74->TabIndex = 0;
            this->label74->Text = L"Name";
            // 
            // panel15
            // 
            this->panel15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->panel15->Controls->Add(this->pictureBox15);
            this->panel15->Controls->Add(this->label75);
            this->panel15->Controls->Add(this->label76);
            this->panel15->Controls->Add(this->label77);
            this->panel15->Location = System::Drawing::Point(3, 230);
            this->panel15->Name = L"panel15";
            this->panel15->Size = System::Drawing::Size(283, 221);
            this->panel15->TabIndex = 3;
            // 
            // pictureBox15
            // 
            this->pictureBox15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.BackgroundImage")));
            this->pictureBox15->Location = System::Drawing::Point(3, 3);
            this->pictureBox15->Name = L"pictureBox15";
            this->pictureBox15->Size = System::Drawing::Size(50, 54);
            this->pictureBox15->TabIndex = 4;
            this->pictureBox15->TabStop = false;
            // 
            // label75
            // 
            this->label75->AutoSize = true;
            this->label75->BackColor = System::Drawing::Color::Black;
            this->label75->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label75->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label75->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label75->Location = System::Drawing::Point(8, 170);
            this->label75->Name = L"label75";
            this->label75->Size = System::Drawing::Size(82, 34);
            this->label75->TabIndex = 2;
            this->label75->Text = L"Cost:";
            // 
            // label76
            // 
            this->label76->AutoSize = true;
            this->label76->BackColor = System::Drawing::Color::Black;
            this->label76->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label76->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label76->Location = System::Drawing::Point(8, 102);
            this->label76->Name = L"label76";
            this->label76->Size = System::Drawing::Size(92, 34);
            this->label76->TabIndex = 1;
            this->label76->Text = L"Code:";
            // 
            // label77
            // 
            this->label77->AutoSize = true;
            this->label77->BackColor = System::Drawing::Color::Black;
            this->label77->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label77->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label77->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label77->Location = System::Drawing::Point(85, 27);
            this->label77->Name = L"label77";
            this->label77->Size = System::Drawing::Size(91, 34);
            this->label77->TabIndex = 0;
            this->label77->Text = L"Name";
            // 
            // panel16
            // 
            this->panel16->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->panel16->Controls->Add(this->pictureBox16);
            this->panel16->Controls->Add(this->label78);
            this->panel16->Controls->Add(this->label79);
            this->panel16->Controls->Add(this->label80);
            this->panel16->Location = System::Drawing::Point(292, 230);
            this->panel16->Name = L"panel16";
            this->panel16->Size = System::Drawing::Size(283, 221);
            this->panel16->TabIndex = 4;
            // 
            // pictureBox16
            // 
            this->pictureBox16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.BackgroundImage")));
            this->pictureBox16->Location = System::Drawing::Point(3, 3);
            this->pictureBox16->Name = L"pictureBox16";
            this->pictureBox16->Size = System::Drawing::Size(50, 54);
            this->pictureBox16->TabIndex = 4;
            this->pictureBox16->TabStop = false;
            // 
            // label78
            // 
            this->label78->AutoSize = true;
            this->label78->BackColor = System::Drawing::Color::Black;
            this->label78->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label78->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label78->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label78->Location = System::Drawing::Point(8, 170);
            this->label78->Name = L"label78";
            this->label78->Size = System::Drawing::Size(82, 34);
            this->label78->TabIndex = 2;
            this->label78->Text = L"Cost:";
            // 
            // label79
            // 
            this->label79->AutoSize = true;
            this->label79->BackColor = System::Drawing::Color::Black;
            this->label79->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label79->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label79->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label79->Location = System::Drawing::Point(8, 102);
            this->label79->Name = L"label79";
            this->label79->Size = System::Drawing::Size(92, 34);
            this->label79->TabIndex = 1;
            this->label79->Text = L"Code:";
            // 
            // label80
            // 
            this->label80->AutoSize = true;
            this->label80->BackColor = System::Drawing::Color::Black;
            this->label80->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label80->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label80->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label80->Location = System::Drawing::Point(85, 27);
            this->label80->Name = L"label80";
            this->label80->Size = System::Drawing::Size(91, 34);
            this->label80->TabIndex = 0;
            this->label80->Text = L"Name";
            // 
            // Students
            // 
            this->Students->AutoScroll = true;
            this->Students->BackColor = System::Drawing::SystemColors::GrayText;
            this->Students->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Students.BackgroundImage")));
            this->Students->Controls->Add(this->panel11);
            this->Students->Controls->Add(this->panel10);
            this->Students->Controls->Add(this->panel9);
            this->Students->Controls->Add(this->panel8);
            this->Students->Controls->Add(this->panel7);
            this->Students->Dock = System::Windows::Forms::DockStyle::Fill;
            this->Students->Location = System::Drawing::Point(0, 0);
            this->Students->Name = L"Students";
            this->Students->Size = System::Drawing::Size(894, 525);
            this->Students->TabIndex = 2;
            // 
            // panel11
            // 
            this->panel11->BackColor = System::Drawing::Color::Gray;
            this->panel11->Controls->Add(this->label19);
            this->panel11->Controls->Add(this->label20);
            this->panel11->Controls->Add(this->label21);
            this->panel11->Controls->Add(this->label22);
            this->panel11->Controls->Add(this->label23);
            this->panel11->Controls->Add(this->label24);
            this->panel11->Controls->Add(this->pictureBox5);
            this->panel11->Location = System::Drawing::Point(6, 560);
            this->panel11->Name = L"panel11";
            this->panel11->Size = System::Drawing::Size(876, 173);
            this->panel11->TabIndex = 8;
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->BackColor = System::Drawing::Color::Gray;
            this->label19->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label19->Location = System::Drawing::Point(641, 125);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(105, 32);
            this->label19->TabIndex = 7;
            this->label19->Text = L"Major: ";
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->BackColor = System::Drawing::Color::Gray;
            this->label20->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label20->Location = System::Drawing::Point(571, 16);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(60, 32);
            this->label20->TabIndex = 6;
            this->label20->Text = L"ID: ";
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->BackColor = System::Drawing::Color::Gray;
            this->label21->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label21->Location = System::Drawing::Point(346, 125);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(99, 32);
            this->label21->TabIndex = 5;
            this->label21->Text = L"Grade:";
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->BackColor = System::Drawing::Color::Gray;
            this->label22->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label22->Location = System::Drawing::Point(25, 125);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(75, 32);
            this->label22->TabIndex = 3;
            this->label22->Text = L"pass:";
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->BackColor = System::Drawing::Color::Gray;
            this->label23->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label23->Location = System::Drawing::Point(111, 72);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(101, 32);
            this->label23->TabIndex = 2;
            this->label23->Text = L"Email: ";
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->BackColor = System::Drawing::Color::Gray;
            this->label24->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label24->Location = System::Drawing::Point(111, 16);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(98, 32);
            this->label24->TabIndex = 1;
            this->label24->Text = L"Name: ";
            // 
            // pictureBox5
            // 
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->Location = System::Drawing::Point(9, 13);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(96, 94);
            this->pictureBox5->TabIndex = 0;
            this->pictureBox5->TabStop = false;
            // 
            // panel10
            // 
            this->panel10->BackColor = System::Drawing::Color::Gray;
            this->panel10->Controls->Add(this->label13);
            this->panel10->Controls->Add(this->label14);
            this->panel10->Controls->Add(this->label15);
            this->panel10->Controls->Add(this->label16);
            this->panel10->Controls->Add(this->label17);
            this->panel10->Controls->Add(this->label18);
            this->panel10->Controls->Add(this->pictureBox4);
            this->panel10->Location = System::Drawing::Point(-2, 736);
            this->panel10->Name = L"panel10";
            this->panel10->Size = System::Drawing::Size(876, 182);
            this->panel10->TabIndex = 7;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->BackColor = System::Drawing::Color::Gray;
            this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->Location = System::Drawing::Point(641, 125);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(105, 32);
            this->label13->TabIndex = 7;
            this->label13->Text = L"Major: ";
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->BackColor = System::Drawing::Color::Gray;
            this->label14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->Location = System::Drawing::Point(571, 16);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(60, 32);
            this->label14->TabIndex = 6;
            this->label14->Text = L"ID: ";
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->BackColor = System::Drawing::Color::Gray;
            this->label15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->Location = System::Drawing::Point(346, 125);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(99, 32);
            this->label15->TabIndex = 5;
            this->label15->Text = L"Grade:";
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->BackColor = System::Drawing::Color::Gray;
            this->label16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label16->Location = System::Drawing::Point(25, 125);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(75, 32);
            this->label16->TabIndex = 3;
            this->label16->Text = L"pass:";
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->BackColor = System::Drawing::Color::Gray;
            this->label17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label17->Location = System::Drawing::Point(111, 72);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(101, 32);
            this->label17->TabIndex = 2;
            this->label17->Text = L"Email: ";
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->BackColor = System::Drawing::Color::Gray;
            this->label18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label18->Location = System::Drawing::Point(111, 16);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(98, 32);
            this->label18->TabIndex = 1;
            this->label18->Text = L"Name: ";
            // 
            // pictureBox4
            // 
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(9, 13);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(96, 94);
            this->pictureBox4->TabIndex = 0;
            this->pictureBox4->TabStop = false;
            // 
            // panel9
            // 
            this->panel9->BackColor = System::Drawing::Color::Gray;
            this->panel9->Controls->Add(this->label7);
            this->panel9->Controls->Add(this->label8);
            this->panel9->Controls->Add(this->label9);
            this->panel9->Controls->Add(this->label10);
            this->panel9->Controls->Add(this->label11);
            this->panel9->Controls->Add(this->label12);
            this->panel9->Controls->Add(this->pictureBox3);
            this->panel9->Location = System::Drawing::Point(9, 384);
            this->panel9->Name = L"panel9";
            this->panel9->Size = System::Drawing::Size(876, 173);
            this->panel9->TabIndex = 6;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->BackColor = System::Drawing::Color::Gray;
            this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(641, 125);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(105, 32);
            this->label7->TabIndex = 7;
            this->label7->Text = L"Major: ";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->BackColor = System::Drawing::Color::Gray;
            this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(571, 16);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(60, 32);
            this->label8->TabIndex = 6;
            this->label8->Text = L"ID: ";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->BackColor = System::Drawing::Color::Gray;
            this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(346, 125);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(99, 32);
            this->label9->TabIndex = 5;
            this->label9->Text = L"Grade:";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->BackColor = System::Drawing::Color::Gray;
            this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->Location = System::Drawing::Point(25, 125);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(75, 32);
            this->label10->TabIndex = 3;
            this->label10->Text = L"pass:";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->BackColor = System::Drawing::Color::Gray;
            this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->Location = System::Drawing::Point(111, 72);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(101, 32);
            this->label11->TabIndex = 2;
            this->label11->Text = L"Email: ";
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->BackColor = System::Drawing::Color::Gray;
            this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->Location = System::Drawing::Point(111, 16);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(98, 32);
            this->label12->TabIndex = 1;
            this->label12->Text = L"Name: ";
            // 
            // pictureBox3
            // 
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(9, 13);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(96, 94);
            this->pictureBox3->TabIndex = 0;
            this->pictureBox3->TabStop = false;
            // 
            // panel8
            // 
            this->panel8->BackColor = System::Drawing::Color::Gray;
            this->panel8->Controls->Add(this->label1);
            this->panel8->Controls->Add(this->label2);
            this->panel8->Controls->Add(this->label3);
            this->panel8->Controls->Add(this->label4);
            this->panel8->Controls->Add(this->label5);
            this->panel8->Controls->Add(this->label6);
            this->panel8->Controls->Add(this->pictureBox2);
            this->panel8->Location = System::Drawing::Point(9, 198);
            this->panel8->Name = L"panel8";
            this->panel8->Size = System::Drawing::Size(876, 183);
            this->panel8->TabIndex = 5;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Gray;
            this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(641, 125);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(105, 32);
            this->label1->TabIndex = 7;
            this->label1->Text = L"Major: ";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Gray;
            this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(571, 16);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(60, 32);
            this->label2->TabIndex = 6;
            this->label2->Text = L"ID: ";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::Gray;
            this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(346, 125);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(99, 32);
            this->label3->TabIndex = 5;
            this->label3->Text = L"Grade:";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::Gray;
            this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(25, 125);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(75, 32);
            this->label4->TabIndex = 3;
            this->label4->Text = L"pass:";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::Gray;
            this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(111, 72);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(101, 32);
            this->label5->TabIndex = 2;
            this->label5->Text = L"Email: ";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::Color::Gray;
            this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(111, 16);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(98, 32);
            this->label6->TabIndex = 1;
            this->label6->Text = L"Name: ";
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(9, 13);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(96, 94);
            this->pictureBox2->TabIndex = 0;
            this->pictureBox2->TabStop = false;
            // 
            // panel7
            // 
            this->panel7->BackColor = System::Drawing::Color::Gray;
            this->panel7->Controls->Add(this->label61);
            this->panel7->Controls->Add(this->label62);
            this->panel7->Controls->Add(this->label63);
            this->panel7->Controls->Add(this->label64);
            this->panel7->Controls->Add(this->label65);
            this->panel7->Controls->Add(this->label66);
            this->panel7->Controls->Add(this->pictureBox12);
            this->panel7->Location = System::Drawing::Point(6, 15);
            this->panel7->Name = L"panel7";
            this->panel7->Size = System::Drawing::Size(876, 180);
            this->panel7->TabIndex = 4;
            // 
            // label61
            // 
            this->label61->AutoSize = true;
            this->label61->BackColor = System::Drawing::Color::Gray;
            this->label61->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label61->Location = System::Drawing::Point(641, 125);
            this->label61->Name = L"label61";
            this->label61->Size = System::Drawing::Size(105, 32);
            this->label61->TabIndex = 7;
            this->label61->Text = L"Major: ";
            // 
            // label62
            // 
            this->label62->AutoSize = true;
            this->label62->BackColor = System::Drawing::Color::Gray;
            this->label62->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label62->Location = System::Drawing::Point(571, 16);
            this->label62->Name = L"label62";
            this->label62->Size = System::Drawing::Size(60, 32);
            this->label62->TabIndex = 6;
            this->label62->Text = L"ID: ";
            // 
            // label63
            // 
            this->label63->AutoSize = true;
            this->label63->BackColor = System::Drawing::Color::Gray;
            this->label63->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label63->Location = System::Drawing::Point(346, 125);
            this->label63->Name = L"label63";
            this->label63->Size = System::Drawing::Size(99, 32);
            this->label63->TabIndex = 5;
            this->label63->Text = L"Grade:";
            // 
            // label64
            // 
            this->label64->AutoSize = true;
            this->label64->BackColor = System::Drawing::Color::Gray;
            this->label64->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label64->Location = System::Drawing::Point(25, 125);
            this->label64->Name = L"label64";
            this->label64->Size = System::Drawing::Size(75, 32);
            this->label64->TabIndex = 3;
            this->label64->Text = L"pass:";
            // 
            // label65
            // 
            this->label65->AutoSize = true;
            this->label65->BackColor = System::Drawing::Color::Gray;
            this->label65->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label65->Location = System::Drawing::Point(111, 72);
            this->label65->Name = L"label65";
            this->label65->Size = System::Drawing::Size(101, 32);
            this->label65->TabIndex = 2;
            this->label65->Text = L"Email: ";
            // 
            // label66
            // 
            this->label66->AutoSize = true;
            this->label66->BackColor = System::Drawing::Color::Gray;
            this->label66->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label66->Location = System::Drawing::Point(111, 16);
            this->label66->Name = L"label66";
            this->label66->Size = System::Drawing::Size(98, 32);
            this->label66->TabIndex = 1;
            this->label66->Text = L"Name: ";
            // 
            // pictureBox12
            // 
            this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
            this->pictureBox12->Location = System::Drawing::Point(9, 13);
            this->pictureBox12->Name = L"pictureBox12";
            this->pictureBox12->Size = System::Drawing::Size(96, 94);
            this->pictureBox12->TabIndex = 0;
            this->pictureBox12->TabStop = false;
            // 
            // CPG
            // 
            this->CPG->AutoScroll = true;
            this->CPG->BackColor = System::Drawing::SystemColors::GrayText;
            this->CPG->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CPG.BackgroundImage")));
            this->CPG->Controls->Add(this->panel6);
            this->CPG->Controls->Add(this->panel5);
            this->CPG->Controls->Add(this->panel2);
            this->CPG->Controls->Add(this->panel3);
            this->CPG->Controls->Add(this->panel4);
            this->CPG->Dock = System::Windows::Forms::DockStyle::Fill;
            this->CPG->Location = System::Drawing::Point(0, 0);
            this->CPG->Name = L"CPG";
            this->CPG->Size = System::Drawing::Size(894, 525);
            this->CPG->TabIndex = 4;
            // 
            // panel6
            // 
            this->panel6->AutoScroll = true;
            this->panel6->BackColor = System::Drawing::Color::Gray;
            this->panel6->Controls->Add(this->label28);
            this->panel6->Controls->Add(this->label55);
            this->panel6->Controls->Add(this->label56);
            this->panel6->Controls->Add(this->label57);
            this->panel6->Controls->Add(this->label58);
            this->panel6->Controls->Add(this->label59);
            this->panel6->Controls->Add(this->label60);
            this->panel6->Controls->Add(this->pictureBox11);
            this->panel6->Location = System::Drawing::Point(5, 535);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(901, 167);
            this->panel6->TabIndex = 7;
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label28->Location = System::Drawing::Point(495, 75);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(127, 32);
            this->label28->TabIndex = 9;
            this->label28->Text = L"Job Title:";
            // 
            // label55
            // 
            this->label55->AutoSize = true;
            this->label55->BackColor = System::Drawing::Color::Gray;
            this->label55->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label55->Location = System::Drawing::Point(641, 125);
            this->label55->Name = L"label55";
            this->label55->Size = System::Drawing::Size(105, 32);
            this->label55->TabIndex = 7;
            this->label55->Text = L"Major: ";
            // 
            // label56
            // 
            this->label56->AutoSize = true;
            this->label56->BackColor = System::Drawing::Color::Gray;
            this->label56->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label56->Location = System::Drawing::Point(571, 16);
            this->label56->Name = L"label56";
            this->label56->Size = System::Drawing::Size(60, 32);
            this->label56->TabIndex = 6;
            this->label56->Text = L"ID: ";
            // 
            // label57
            // 
            this->label57->AutoSize = true;
            this->label57->BackColor = System::Drawing::Color::Gray;
            this->label57->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label57->Location = System::Drawing::Point(346, 125);
            this->label57->Name = L"label57";
            this->label57->Size = System::Drawing::Size(99, 32);
            this->label57->TabIndex = 5;
            this->label57->Text = L"Grade:";
            // 
            // label58
            // 
            this->label58->AutoSize = true;
            this->label58->BackColor = System::Drawing::Color::Gray;
            this->label58->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label58->Location = System::Drawing::Point(25, 125);
            this->label58->Name = L"label58";
            this->label58->Size = System::Drawing::Size(75, 32);
            this->label58->TabIndex = 3;
            this->label58->Text = L"pass:";
            // 
            // label59
            // 
            this->label59->AutoSize = true;
            this->label59->BackColor = System::Drawing::Color::Gray;
            this->label59->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label59->Location = System::Drawing::Point(111, 72);
            this->label59->Name = L"label59";
            this->label59->Size = System::Drawing::Size(101, 32);
            this->label59->TabIndex = 2;
            this->label59->Text = L"Email: ";
            // 
            // label60
            // 
            this->label60->AutoSize = true;
            this->label60->BackColor = System::Drawing::Color::Gray;
            this->label60->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label60->Location = System::Drawing::Point(111, 16);
            this->label60->Name = L"label60";
            this->label60->Size = System::Drawing::Size(98, 32);
            this->label60->TabIndex = 1;
            this->label60->Text = L"Name: ";
            // 
            // pictureBox11
            // 
            this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
            this->pictureBox11->Location = System::Drawing::Point(9, 13);
            this->pictureBox11->Name = L"pictureBox11";
            this->pictureBox11->Size = System::Drawing::Size(96, 94);
            this->pictureBox11->TabIndex = 0;
            this->pictureBox11->TabStop = false;
            // 
            // panel5
            // 
            this->panel5->AutoScroll = true;
            this->panel5->BackColor = System::Drawing::Color::Gray;
            this->panel5->Controls->Add(this->label26);
            this->panel5->Controls->Add(this->label49);
            this->panel5->Controls->Add(this->label50);
            this->panel5->Controls->Add(this->label51);
            this->panel5->Controls->Add(this->label52);
            this->panel5->Controls->Add(this->label53);
            this->panel5->Controls->Add(this->label54);
            this->panel5->Controls->Add(this->pictureBox10);
            this->panel5->Location = System::Drawing::Point(-3, 188);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(901, 167);
            this->panel5->TabIndex = 6;
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label26->Location = System::Drawing::Point(492, 72);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(127, 32);
            this->label26->TabIndex = 9;
            this->label26->Text = L"Job Title:";
            // 
            // label49
            // 
            this->label49->AutoSize = true;
            this->label49->BackColor = System::Drawing::Color::Gray;
            this->label49->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label49->Location = System::Drawing::Point(641, 125);
            this->label49->Name = L"label49";
            this->label49->Size = System::Drawing::Size(105, 32);
            this->label49->TabIndex = 7;
            this->label49->Text = L"Major: ";
            // 
            // label50
            // 
            this->label50->AutoSize = true;
            this->label50->BackColor = System::Drawing::Color::Gray;
            this->label50->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label50->Location = System::Drawing::Point(571, 16);
            this->label50->Name = L"label50";
            this->label50->Size = System::Drawing::Size(60, 32);
            this->label50->TabIndex = 6;
            this->label50->Text = L"ID: ";
            // 
            // label51
            // 
            this->label51->AutoSize = true;
            this->label51->BackColor = System::Drawing::Color::Gray;
            this->label51->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label51->Location = System::Drawing::Point(346, 125);
            this->label51->Name = L"label51";
            this->label51->Size = System::Drawing::Size(99, 32);
            this->label51->TabIndex = 5;
            this->label51->Text = L"Grade:";
            // 
            // label52
            // 
            this->label52->AutoSize = true;
            this->label52->BackColor = System::Drawing::Color::Gray;
            this->label52->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label52->Location = System::Drawing::Point(25, 125);
            this->label52->Name = L"label52";
            this->label52->Size = System::Drawing::Size(75, 32);
            this->label52->TabIndex = 3;
            this->label52->Text = L"pass:";
            // 
            // label53
            // 
            this->label53->AutoSize = true;
            this->label53->BackColor = System::Drawing::Color::Gray;
            this->label53->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label53->Location = System::Drawing::Point(111, 72);
            this->label53->Name = L"label53";
            this->label53->Size = System::Drawing::Size(101, 32);
            this->label53->TabIndex = 2;
            this->label53->Text = L"Email: ";
            // 
            // label54
            // 
            this->label54->AutoSize = true;
            this->label54->BackColor = System::Drawing::Color::Gray;
            this->label54->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label54->Location = System::Drawing::Point(111, 16);
            this->label54->Name = L"label54";
            this->label54->Size = System::Drawing::Size(98, 32);
            this->label54->TabIndex = 1;
            this->label54->Text = L"Name: ";
            // 
            // pictureBox10
            // 
            this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
            this->pictureBox10->Location = System::Drawing::Point(9, 13);
            this->pictureBox10->Name = L"pictureBox10";
            this->pictureBox10->Size = System::Drawing::Size(96, 94);
            this->pictureBox10->TabIndex = 0;
            this->pictureBox10->TabStop = false;
            // 
            // panel2
            // 
            this->panel2->AutoScroll = true;
            this->panel2->BackColor = System::Drawing::Color::Gray;
            this->panel2->Controls->Add(this->label29);
            this->panel2->Controls->Add(this->label31);
            this->panel2->Controls->Add(this->label32);
            this->panel2->Controls->Add(this->label33);
            this->panel2->Controls->Add(this->label34);
            this->panel2->Controls->Add(this->label35);
            this->panel2->Controls->Add(this->label36);
            this->panel2->Controls->Add(this->pictureBox7);
            this->panel2->Location = System::Drawing::Point(-3, 704);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(900, 165);
            this->panel2->TabIndex = 5;
            // 
            // label29
            // 
            this->label29->AutoSize = true;
            this->label29->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label29->Location = System::Drawing::Point(492, 72);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(127, 32);
            this->label29->TabIndex = 9;
            this->label29->Text = L"Job Title:";
            // 
            // label31
            // 
            this->label31->AutoSize = true;
            this->label31->BackColor = System::Drawing::Color::Gray;
            this->label31->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label31->Location = System::Drawing::Point(641, 125);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(105, 32);
            this->label31->TabIndex = 7;
            this->label31->Text = L"Major: ";
            // 
            // label32
            // 
            this->label32->AutoSize = true;
            this->label32->BackColor = System::Drawing::Color::Gray;
            this->label32->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label32->Location = System::Drawing::Point(571, 16);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(60, 32);
            this->label32->TabIndex = 6;
            this->label32->Text = L"ID: ";
            // 
            // label33
            // 
            this->label33->AutoSize = true;
            this->label33->BackColor = System::Drawing::Color::Gray;
            this->label33->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label33->Location = System::Drawing::Point(346, 125);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(99, 32);
            this->label33->TabIndex = 5;
            this->label33->Text = L"Grade:";
            // 
            // label34
            // 
            this->label34->AutoSize = true;
            this->label34->BackColor = System::Drawing::Color::Gray;
            this->label34->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label34->Location = System::Drawing::Point(25, 125);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(75, 32);
            this->label34->TabIndex = 3;
            this->label34->Text = L"pass:";
            // 
            // label35
            // 
            this->label35->AutoSize = true;
            this->label35->BackColor = System::Drawing::Color::Gray;
            this->label35->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label35->Location = System::Drawing::Point(111, 72);
            this->label35->Name = L"label35";
            this->label35->Size = System::Drawing::Size(101, 32);
            this->label35->TabIndex = 2;
            this->label35->Text = L"Email: ";
            // 
            // label36
            // 
            this->label36->AutoSize = true;
            this->label36->BackColor = System::Drawing::Color::Gray;
            this->label36->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label36->Location = System::Drawing::Point(111, 16);
            this->label36->Name = L"label36";
            this->label36->Size = System::Drawing::Size(98, 32);
            this->label36->TabIndex = 1;
            this->label36->Text = L"Name: ";
            // 
            // pictureBox7
            // 
            this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
            this->pictureBox7->Location = System::Drawing::Point(9, 13);
            this->pictureBox7->Name = L"pictureBox7";
            this->pictureBox7->Size = System::Drawing::Size(96, 94);
            this->pictureBox7->TabIndex = 0;
            this->pictureBox7->TabStop = false;
            // 
            // panel3
            // 
            this->panel3->AutoScroll = true;
            this->panel3->BackColor = System::Drawing::Color::Gray;
            this->panel3->Controls->Add(this->label27);
            this->panel3->Controls->Add(this->label37);
            this->panel3->Controls->Add(this->label38);
            this->panel3->Controls->Add(this->label39);
            this->panel3->Controls->Add(this->label40);
            this->panel3->Controls->Add(this->label41);
            this->panel3->Controls->Add(this->label42);
            this->panel3->Controls->Add(this->pictureBox8);
            this->panel3->Location = System::Drawing::Point(-4, 357);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(901, 176);
            this->panel3->TabIndex = 4;
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label27->Location = System::Drawing::Point(493, 72);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(127, 32);
            this->label27->TabIndex = 9;
            this->label27->Text = L"Job Title:";
            // 
            // label37
            // 
            this->label37->AutoSize = true;
            this->label37->BackColor = System::Drawing::Color::Gray;
            this->label37->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label37->Location = System::Drawing::Point(641, 125);
            this->label37->Name = L"label37";
            this->label37->Size = System::Drawing::Size(105, 32);
            this->label37->TabIndex = 7;
            this->label37->Text = L"Major: ";
            // 
            // label38
            // 
            this->label38->AutoSize = true;
            this->label38->BackColor = System::Drawing::Color::Gray;
            this->label38->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label38->Location = System::Drawing::Point(571, 16);
            this->label38->Name = L"label38";
            this->label38->Size = System::Drawing::Size(60, 32);
            this->label38->TabIndex = 6;
            this->label38->Text = L"ID: ";
            // 
            // label39
            // 
            this->label39->AutoSize = true;
            this->label39->BackColor = System::Drawing::Color::Gray;
            this->label39->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label39->Location = System::Drawing::Point(346, 125);
            this->label39->Name = L"label39";
            this->label39->Size = System::Drawing::Size(99, 32);
            this->label39->TabIndex = 5;
            this->label39->Text = L"Grade:";
            // 
            // label40
            // 
            this->label40->AutoSize = true;
            this->label40->BackColor = System::Drawing::Color::Gray;
            this->label40->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label40->Location = System::Drawing::Point(25, 125);
            this->label40->Name = L"label40";
            this->label40->Size = System::Drawing::Size(75, 32);
            this->label40->TabIndex = 3;
            this->label40->Text = L"pass:";
            // 
            // label41
            // 
            this->label41->AutoSize = true;
            this->label41->BackColor = System::Drawing::Color::Gray;
            this->label41->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label41->Location = System::Drawing::Point(111, 72);
            this->label41->Name = L"label41";
            this->label41->Size = System::Drawing::Size(94, 32);
            this->label41->TabIndex = 2;
            this->label41->Text = L"Email:";
            // 
            // label42
            // 
            this->label42->AutoSize = true;
            this->label42->BackColor = System::Drawing::Color::Gray;
            this->label42->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label42->Location = System::Drawing::Point(111, 16);
            this->label42->Name = L"label42";
            this->label42->Size = System::Drawing::Size(98, 32);
            this->label42->TabIndex = 1;
            this->label42->Text = L"Name: ";
            // 
            // pictureBox8
            // 
            this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
            this->pictureBox8->Location = System::Drawing::Point(9, 13);
            this->pictureBox8->Name = L"pictureBox8";
            this->pictureBox8->Size = System::Drawing::Size(96, 94);
            this->pictureBox8->TabIndex = 0;
            this->pictureBox8->TabStop = false;
            // 
            // panel4
            // 
            this->panel4->AutoScroll = true;
            this->panel4->BackColor = System::Drawing::Color::Gray;
            this->panel4->Controls->Add(this->label25);
            this->panel4->Controls->Add(this->label43);
            this->panel4->Controls->Add(this->label44);
            this->panel4->Controls->Add(this->label45);
            this->panel4->Controls->Add(this->label46);
            this->panel4->Controls->Add(this->label47);
            this->panel4->Controls->Add(this->label48);
            this->panel4->Controls->Add(this->pictureBox9);
            this->panel4->Location = System::Drawing::Point(-3, 10);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(901, 176);
            this->panel4->TabIndex = 3;
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label25->Location = System::Drawing::Point(503, 65);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(127, 32);
            this->label25->TabIndex = 8;
            this->label25->Text = L"Job Title:";
            // 
            // label43
            // 
            this->label43->AutoSize = true;
            this->label43->BackColor = System::Drawing::Color::Gray;
            this->label43->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label43->Location = System::Drawing::Point(641, 125);
            this->label43->Name = L"label43";
            this->label43->Size = System::Drawing::Size(105, 32);
            this->label43->TabIndex = 7;
            this->label43->Text = L"Major: ";
            // 
            // label44
            // 
            this->label44->AutoSize = true;
            this->label44->BackColor = System::Drawing::Color::Gray;
            this->label44->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label44->Location = System::Drawing::Point(571, 16);
            this->label44->Name = L"label44";
            this->label44->Size = System::Drawing::Size(60, 32);
            this->label44->TabIndex = 6;
            this->label44->Text = L"ID: ";
            // 
            // label45
            // 
            this->label45->AutoSize = true;
            this->label45->BackColor = System::Drawing::Color::Gray;
            this->label45->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label45->Location = System::Drawing::Point(346, 125);
            this->label45->Name = L"label45";
            this->label45->Size = System::Drawing::Size(99, 32);
            this->label45->TabIndex = 5;
            this->label45->Text = L"Grade:";
            // 
            // label46
            // 
            this->label46->AutoSize = true;
            this->label46->BackColor = System::Drawing::Color::Gray;
            this->label46->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label46->Location = System::Drawing::Point(25, 125);
            this->label46->Name = L"label46";
            this->label46->Size = System::Drawing::Size(75, 32);
            this->label46->TabIndex = 3;
            this->label46->Text = L"pass:";
            // 
            // label47
            // 
            this->label47->AutoSize = true;
            this->label47->BackColor = System::Drawing::Color::Gray;
            this->label47->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label47->Location = System::Drawing::Point(111, 72);
            this->label47->Name = L"label47";
            this->label47->Size = System::Drawing::Size(101, 32);
            this->label47->TabIndex = 2;
            this->label47->Text = L"Email: ";
            // 
            // label48
            // 
            this->label48->AutoSize = true;
            this->label48->BackColor = System::Drawing::Color::Gray;
            this->label48->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label48->Location = System::Drawing::Point(111, 16);
            this->label48->Name = L"label48";
            this->label48->Size = System::Drawing::Size(98, 32);
            this->label48->TabIndex = 1;
            this->label48->Text = L"Name: ";
            // 
            // pictureBox9
            // 
            this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
            this->pictureBox9->Location = System::Drawing::Point(9, 13);
            this->pictureBox9->Name = L"pictureBox9";
            this->pictureBox9->Size = System::Drawing::Size(96, 94);
            this->pictureBox9->TabIndex = 0;
            this->pictureBox9->TabStop = false;
            // 
            // Home
            // 
            this->Home->AutoScroll = true;
            this->Home->BackColor = System::Drawing::SystemColors::GrayText;
            this->Home->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Home.BackgroundImage")));
            this->Home->Dock = System::Windows::Forms::DockStyle::Fill;
            this->Home->Location = System::Drawing::Point(0, 0);
            this->Home->Name = L"Home";
            this->Home->Size = System::Drawing::Size(894, 525);
            this->Home->TabIndex = 5;
            this->Home->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::Home_Paint);
            // 
            // btnAddCourse
            // 
            this->btnAddCourse->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->btnAddCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnAddCourse->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnAddCourse->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->btnAddCourse->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAddCourse.Image")));
            this->btnAddCourse->Location = System::Drawing::Point(524, 2);
            this->btnAddCourse->Name = L"btnAddCourse";
            this->btnAddCourse->Size = System::Drawing::Size(126, 107);
            this->btnAddCourse->TabIndex = 1;
            this->btnAddCourse->Text = L"Add course";
            this->btnAddCourse->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->btnAddCourse->UseVisualStyleBackColor = true;
            this->btnAddCourse->Click += gcnew System::EventHandler(this, &MyForm::btnAddCourse_Click);
            // 
            // btnAddStd
            // 
            this->btnAddStd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
            this->btnAddStd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnAddStd->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnAddStd->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->btnAddStd->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAddStd.Image")));
            this->btnAddStd->Location = System::Drawing::Point(240, 2);
            this->btnAddStd->Name = L"btnAddStd";
            this->btnAddStd->Size = System::Drawing::Size(138, 107);
            this->btnAddStd->TabIndex = 5;
            this->btnAddStd->Text = L"Add student";
            this->btnAddStd->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->btnAddStd->UseVisualStyleBackColor = true;
            this->btnAddStd->Click += gcnew System::EventHandler(this, &MyForm::btnAddStd_Click);
            // 
            // btnAddPG
            // 
            this->btnAddPG->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->btnAddPG->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnAddPG->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnAddPG->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->btnAddPG->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAddPG.Image")));
            this->btnAddPG->Location = System::Drawing::Point(385, 1);
            this->btnAddPG->Name = L"btnAddPG";
            this->btnAddPG->Size = System::Drawing::Size(131, 108);
            this->btnAddPG->TabIndex = 6;
            this->btnAddPG->Text = L"Add PG ST";
            this->btnAddPG->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->btnAddPG->UseVisualStyleBackColor = true;
            // 
            // panel1
            // 
            this->panel1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
                static_cast<System::Int32>(static_cast<System::Byte>(88)));
            this->panel1->Controls->Add(this->btnAddPG);
            this->panel1->Controls->Add(this->btnAddStd);
            this->panel1->Controls->Add(this->btnAddCourse);
            this->panel1->Location = System::Drawing::Point(154, 519);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(897, 112);
            this->panel1->TabIndex = 2;
            this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->ClientSize = System::Drawing::Size(1048, 631);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->window);
            this->Controls->Add(this->navigateBar);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
            this->Name = L"MyForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"MOODLE";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->navigateBar->ResumeLayout(false);
            this->flowLayoutPanel1->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->window->ResumeLayout(false);
            this->Courses->ResumeLayout(false);
            this->flowLayoutPanel2->ResumeLayout(false);
            this->panel12->ResumeLayout(false);
            this->panel12->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
            this->panel13->ResumeLayout(false);
            this->panel13->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
            this->panel14->ResumeLayout(false);
            this->panel14->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
            this->panel15->ResumeLayout(false);
            this->panel15->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
            this->panel16->ResumeLayout(false);
            this->panel16->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
            this->Students->ResumeLayout(false);
            this->panel11->ResumeLayout(false);
            this->panel11->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            this->panel10->ResumeLayout(false);
            this->panel10->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            this->panel9->ResumeLayout(false);
            this->panel9->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            this->panel8->ResumeLayout(false);
            this->panel8->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->panel7->ResumeLayout(false);
            this->panel7->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
            this->CPG->ResumeLayout(false);
            this->panel6->ResumeLayout(false);
            this->panel6->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
            this->panel5->ResumeLayout(false);
            this->panel5->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
            this->panel1->ResumeLayout(false);
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void navigateBar_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    Students->BringToFront();
}


private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void btnHome_Click(System::Object^ sender, System::EventArgs^ e) {
    Home->BringToFront();
}
private: System::Void btnCourses_Click(System::Object^ sender, System::EventArgs^ e) {
    Courses->BringToFront();
}
private: System::Void btnCPG_Click(System::Object^ sender, System::EventArgs^ e) {
    CPG->BringToFront();
}
private: System::Void Home_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnAddStd_Click(System::Object^ sender, System::EventArgs^ e) {
    //this->Hide();
    MyForm2^ frm2 = gcnew MyForm2;
    frm2->Show();
}
private: System::Void label67_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnAddCourse_Click(System::Object^ sender, System::EventArgs^ e) {
    MyForm3^ frm3 = gcnew MyForm3;
    frm3->Show();
}
private: System::Void panel12_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Courses_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void flowLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}