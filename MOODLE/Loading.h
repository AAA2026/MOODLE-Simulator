#pragma once
#include "MyForm.h"
#include"MyForm2.h"
#include"MyForm3.h"
#include"NumberSize.h"

namespace MMODLE {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoadingScreen
	/// </summary>
	public ref class Loading : public System::Windows::Forms::Form
	{
	public:
		Loading(void)
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
		~Loading()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ProgressBar^ loading_bar;

	protected:

	protected:

	private: System::Windows::Forms::Timer^ timer1;

	private: System::Windows::Forms::PictureBox^ pictureBox1;









	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Loading::typeid));
			this->loading_bar = (gcnew System::Windows::Forms::ProgressBar());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// loading_bar
			// 
			this->loading_bar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->loading_bar->ForeColor = System::Drawing::Color::Lime;
			this->loading_bar->Location = System::Drawing::Point(29, 425);
			this->loading_bar->Name = L"loading_bar";
			this->loading_bar->Size = System::Drawing::Size(728, 31);
			this->loading_bar->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->loading_bar->TabIndex = 0;
			this->loading_bar->Click += gcnew System::EventHandler(this, &Loading::loading_bar_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &Loading::timer1_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(134, 149);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(451, 157);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// Loading
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(769, 563);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->loading_bar);
			this->Name = L"Loading";
			this->Text = L"moodle";
			this->Load += gcnew System::EventHandler(this, &Loading::LoadingScreen_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void LoadingScreen_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		loading_bar->Maximum = 300;// the max value of the bar
		loading_bar->Increment(10);// how the  bar will increase
		if (loading_bar->Value == 300) {//if the loading bar reached an end
			//loading_bar->Visible = false;  //making the loading bar dissapears
			//moodle_slogan->Visible = false;  // making the image dissapears
			//this->BackgroundImage = nullptr;  //set the background to null after the condition became true
			timer1->Enabled = false;// disable the timer
			this->Hide();
			MyForm^ Nfrm = gcnew MyForm;
			Nfrm->Show();
			//MyForm^ frm1 = gcnew MyForm;
			//frm1->Show();
		}
	}
	private: System::Void moodle_logo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void loading_bar_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	};
}