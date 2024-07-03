#pragma once

namespace NottyPad {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NottyPad_GUI
	/// </summary>
	public ref class NottyPad_GUI : public System::Windows::Forms::Form
	{
	public:
		NottyPad_GUI(void)
		{
			InitializeComponent();
			panel_About->Hide();
			fileEdited = false;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NottyPad_GUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip_Options;
	protected:

	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox_Note;

	private: System::Windows::Forms::Panel^ panel_About;







	private: System::Windows::Forms::Label^ label_Close_Panel;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ToolStripMenuItem^ settingsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ languageToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ turkishToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ englishToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ themeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ darkToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ lightToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog;
	private: System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(NottyPad_GUI::typeid));
			this->menuStrip_Options = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->languageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->turkishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->englishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->themeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->darkToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lightToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox_Note = (gcnew System::Windows::Forms::TextBox());
			this->panel_About = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label_Close_Panel = (gcnew System::Windows::Forms::Label());
			this->saveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip_Options->SuspendLayout();
			this->panel_About->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip_Options
			// 
			this->menuStrip_Options->BackColor = System::Drawing::SystemColors::Window;
			this->menuStrip_Options->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8));
			this->menuStrip_Options->GripMargin = System::Windows::Forms::Padding(0, 2, 0, 2);
			this->menuStrip_Options->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->settingsToolStripMenuItem, this->aboutToolStripMenuItem
			});
			this->menuStrip_Options->LayoutStyle = System::Windows::Forms::ToolStripLayoutStyle::Flow;
			this->menuStrip_Options->Location = System::Drawing::Point(0, 0);
			this->menuStrip_Options->Name = L"menuStrip_Options";
			this->menuStrip_Options->Padding = System::Windows::Forms::Padding(0);
			this->menuStrip_Options->Size = System::Drawing::Size(1068, 17);
			this->menuStrip_Options->Stretch = false;
			this->menuStrip_Options->TabIndex = 0;
			this->menuStrip_Options->Text = L"menuStrip_Options";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->newToolStripMenuItem,
					this->openToolStripMenuItem, this->saveToolStripMenuItem, this->saveAsToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 17);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &NottyPad_GUI::newToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &NottyPad_GUI::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &NottyPad_GUI::saveToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->saveAsToolStripMenuItem->Text = L"Save As";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &NottyPad_GUI::saveAsToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &NottyPad_GUI::exitToolStripMenuItem_Click);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->languageToolStripMenuItem,
					this->themeToolStripMenuItem
			});
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(61, 17);
			this->settingsToolStripMenuItem->Text = L"Settings";
			// 
			// languageToolStripMenuItem
			// 
			this->languageToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->turkishToolStripMenuItem,
					this->englishToolStripMenuItem
			});
			this->languageToolStripMenuItem->Name = L"languageToolStripMenuItem";
			this->languageToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->languageToolStripMenuItem->Text = L"Language";
			// 
			// turkishToolStripMenuItem
			// 
			this->turkishToolStripMenuItem->Name = L"turkishToolStripMenuItem";
			this->turkishToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->turkishToolStripMenuItem->Text = L"Turkish";
			// 
			// englishToolStripMenuItem
			// 
			this->englishToolStripMenuItem->Name = L"englishToolStripMenuItem";
			this->englishToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->englishToolStripMenuItem->Text = L"English";
			// 
			// themeToolStripMenuItem
			// 
			this->themeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->darkToolStripMenuItem,
					this->lightToolStripMenuItem
			});
			this->themeToolStripMenuItem->Name = L"themeToolStripMenuItem";
			this->themeToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->themeToolStripMenuItem->Text = L"Theme";
			// 
			// darkToolStripMenuItem
			// 
			this->darkToolStripMenuItem->Name = L"darkToolStripMenuItem";
			this->darkToolStripMenuItem->Size = System::Drawing::Size(100, 22);
			this->darkToolStripMenuItem->Text = L"Dark";
			// 
			// lightToolStripMenuItem
			// 
			this->lightToolStripMenuItem->Name = L"lightToolStripMenuItem";
			this->lightToolStripMenuItem->Size = System::Drawing::Size(100, 22);
			this->lightToolStripMenuItem->Text = L"Light";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(51, 17);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &NottyPad_GUI::aboutToolStripMenuItem_Click);
			// 
			// textBox_Note
			// 
			this->textBox_Note->AcceptsReturn = true;
			this->textBox_Note->AcceptsTab = true;
			this->textBox_Note->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_Note->Location = System::Drawing::Point(0, 19);
			this->textBox_Note->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBox_Note->Multiline = true;
			this->textBox_Note->Name = L"textBox_Note";
			this->textBox_Note->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox_Note->Size = System::Drawing::Size(1068, 500);
			this->textBox_Note->TabIndex = 1;
			this->textBox_Note->TextChanged += gcnew System::EventHandler(this, &NottyPad_GUI::textBox_Note_TextChanged);
			// 
			// panel_About
			// 
			this->panel_About->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_About.BackgroundImage")));
			this->panel_About->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel_About->Controls->Add(this->label2);
			this->panel_About->Controls->Add(this->label_Close_Panel);
			this->panel_About->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel_About->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->panel_About->Location = System::Drawing::Point(420, 157);
			this->panel_About->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel_About->Name = L"panel_About";
			this->panel_About->Size = System::Drawing::Size(226, 224);
			this->panel_About->TabIndex = 2;
			this->panel_About->Click += gcnew System::EventHandler(this, &NottyPad_GUI::panel_About_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(74, 12);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 21);
			this->label2->TabIndex = 5;
			this->label2->Text = L"NottyPad";
			// 
			// label_Close_Panel
			// 
			this->label_Close_Panel->AutoSize = true;
			this->label_Close_Panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->label_Close_Panel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label_Close_Panel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label_Close_Panel->ForeColor = System::Drawing::Color::White;
			this->label_Close_Panel->Location = System::Drawing::Point(197, 9);
			this->label_Close_Panel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_Close_Panel->Name = L"label_Close_Panel";
			this->label_Close_Panel->Size = System::Drawing::Size(19, 21);
			this->label_Close_Panel->TabIndex = 4;
			this->label_Close_Panel->Text = L"X";
			this->label_Close_Panel->Click += gcnew System::EventHandler(this, &NottyPad_GUI::label_Close_Panel_Click);
			// 
			// saveFileDialog
			// 
			this->saveFileDialog->DefaultExt = L"txt";
			this->saveFileDialog->Filter = L"Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
			this->saveFileDialog->Title = L"Save";
			// 
			// openFileDialog
			// 
			this->openFileDialog->Filter = L"Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
			// 
			// NottyPad_GUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1068, 520);
			this->Controls->Add(this->panel_About);
			this->Controls->Add(this->textBox_Note);
			this->Controls->Add(this->menuStrip_Options);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip_Options;
			this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Name = L"NottyPad_GUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Unnamed - NottyPad";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &NottyPad_GUI::NottyPad_GUI_FormClosing);
			this->menuStrip_Options->ResumeLayout(false);
			this->menuStrip_Options->PerformLayout();
			this->panel_About->ResumeLayout(false);
			this->panel_About->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//ToolStripMenu Events
	private:
		bool fileEdited;
		System::Void newToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void checkForNewFile(TextBox^ textBox, SaveFileDialog^ saveFileDialog);
		System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void checkForOpenFile(TextBox^ textBox, SaveFileDialog^ saveFileDialog);
		System::Void openFile(TextBox^ textBox, OpenFileDialog^ openFileDialog);
		System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void saveFile(TextBox^ textBox, SaveFileDialog^ saveFileDialog);
		System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void saveAndClose(TextBox^ textBox, SaveFileDialog^ saveFileDialog);

		//About Panel Events
	private:
		System::Void label_Close_Panel_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void panel_About_Click(System::Object^ sender, System::EventArgs^ e);


		//Other Tools
	private:
		System::Void textBox_Note_TextChanged(System::Object^ sender, System::EventArgs^ e);
		System::Void NottyPad_GUI_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);


	};
}
