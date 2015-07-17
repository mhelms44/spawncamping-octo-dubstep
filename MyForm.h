#pragma once

namespace BPM2MSGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
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
	private: System::Windows::Forms::Button^  calcbutton;
	private: System::Windows::Forms::Button^  resetbutton;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  qNoteBox;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  eNoteBox;
	private: System::Windows::Forms::TextBox^  sNoteBox;
	private: System::Windows::Forms::TextBox^  tNoteBox;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::MaskedTextBox^  bpmBox;

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->calcbutton = (gcnew System::Windows::Forms::Button());
			this->resetbutton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->qNoteBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->eNoteBox = (gcnew System::Windows::Forms::TextBox());
			this->sNoteBox = (gcnew System::Windows::Forms::TextBox());
			this->tNoteBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->bpmBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->SuspendLayout();
			// 
			// calcbutton
			// 
			this->calcbutton->ForeColor = System::Drawing::Color::Black;
			this->calcbutton->Location = System::Drawing::Point(36, 178);
			this->calcbutton->Name = L"calcbutton";
			this->calcbutton->Size = System::Drawing::Size(75, 23);
			this->calcbutton->TabIndex = 0;
			this->calcbutton->Text = L"Calculate";
			this->calcbutton->UseVisualStyleBackColor = true;
			this->calcbutton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// resetbutton
			// 
			this->resetbutton->ForeColor = System::Drawing::Color::Black;
			this->resetbutton->Location = System::Drawing::Point(185, 178);
			this->resetbutton->Name = L"resetbutton";
			this->resetbutton->Size = System::Drawing::Size(75, 23);
			this->resetbutton->TabIndex = 1;
			this->resetbutton->Text = L"Reset";
			this->resetbutton->UseVisualStyleBackColor = true;
			this->resetbutton->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"BPM: ";
			// 
			// qNoteBox
			// 
			this->qNoteBox->Location = System::Drawing::Point(160, 48);
			this->qNoteBox->Name = L"qNoteBox";
			this->qNoteBox->ReadOnly = true;
			this->qNoteBox->Size = System::Drawing::Size(100, 20);
			this->qNoteBox->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Quarter Note MS:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// eNoteBox
			// 
			this->eNoteBox->Location = System::Drawing::Point(160, 74);
			this->eNoteBox->Name = L"eNoteBox";
			this->eNoteBox->ReadOnly = true;
			this->eNoteBox->Size = System::Drawing::Size(100, 20);
			this->eNoteBox->TabIndex = 6;
			// 
			// sNoteBox
			// 
			this->sNoteBox->Location = System::Drawing::Point(160, 100);
			this->sNoteBox->Name = L"sNoteBox";
			this->sNoteBox->ReadOnly = true;
			this->sNoteBox->Size = System::Drawing::Size(100, 20);
			this->sNoteBox->TabIndex = 7;
			// 
			// tNoteBox
			// 
			this->tNoteBox->Location = System::Drawing::Point(160, 126);
			this->tNoteBox->Name = L"tNoteBox";
			this->tNoteBox->ReadOnly = true;
			this->tNoteBox->Size = System::Drawing::Size(100, 20);
			this->tNoteBox->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 81);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Eighth Note MS:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(33, 107);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Sixteenth Note MS:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(33, 133);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Thirty-Second Note MS:";
			// 
			// bpmBox
			// 
			this->bpmBox->AsciiOnly = true;
			this->bpmBox->HideSelection = false;
			this->bpmBox->Location = System::Drawing::Point(160, 21);
			this->bpmBox->Mask = L"000";
			this->bpmBox->Name = L"bpmBox";
			this->bpmBox->PromptChar = ' ';
			this->bpmBox->ShortcutsEnabled = false;
			this->bpmBox->Size = System::Drawing::Size(100, 20);
			this->bpmBox->TabIndex = 12;
			this->bpmBox->Text = L"120";
			this->bpmBox->Click += gcnew System::EventHandler(this, &MyForm::bpm_click);
			this->bpmBox->Enter += gcnew System::EventHandler(this, &MyForm::bpm_focus);
			// 
			// MyForm
			// 
			this->AcceptButton = this->calcbutton;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->bpmBox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tNoteBox);
			this->Controls->Add(this->sNoteBox);
			this->Controls->Add(this->eNoteBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->qNoteBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->resetbutton);
			this->Controls->Add(this->calcbutton);
			this->ForeColor = System::Drawing::Color::White;
			this->Name = L"MyForm";
			this->Text = L"BPM2MS";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //get BPM value, setup variables, and calculate the values
				 int BPM = Int32::Parse(bpmBox->Text);
				 if (BPM == 0)
				 {
					 BPM = 1;

				 }
				 int qNote = 0;
				 int eNote = 0;
				 int sNote = 0;
				 int tNote = 0;



				 qNote = (60000 / BPM);
				 eNote = (qNote / 2);
				 sNote = (eNote / 2);
				 tNote = (sNote / 2);
				 //Convert back to strings

				 System::String^ quarterNote = qNote.ToString();
				 System::String^ eighthNote = eNote.ToString();
				 System::String^ sixteenthNote = sNote.ToString();
				 System::String^ thirtySecondNote = tNote.ToString();

				 //Send to label fields
				 this->qNoteBox->Text = quarterNote;
				 this->eNoteBox->Text = eighthNote;
				 this->sNoteBox->Text = sixteenthNote;
				 this->tNoteBox->Text = thirtySecondNote;



	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 //clear label fields
				 this->bpmBox->Text = "0";
				 this->qNoteBox->Text = "0";
				 this->eNoteBox->Text = "0";
				 this->sNoteBox->Text = "0";
				 this->tNoteBox->Text = "0";

	}
	private: System::Void bpm_click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void bpm_focus(System::Object^  sender, System::EventArgs^  e) {


	}
	};
}
