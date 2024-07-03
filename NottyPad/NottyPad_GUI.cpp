#include "NottyPad_GUI.h"

using namespace System::Windows::Forms;
using namespace System::Diagnostics;
using namespace System::IO;

System::Windows::Forms::DialogResult saveChanges;
System::Windows::Forms::DialogResult dialogResult;

//Custom Functions
System::Void NottyPad::NottyPad_GUI::saveAndClose(TextBox^ textBox, SaveFileDialog^ saveFileDialog) {
	saveChanges = MessageBox::Show("Are you want to save this changes?", "Warning", MessageBoxButtons::YesNo);
	if (saveChanges == System::Windows::Forms::DialogResult::Yes) {
		dialogResult = saveFileDialog->ShowDialog();
		if (dialogResult == System::Windows::Forms::DialogResult::OK) {
			saveFile(textBox, saveFileDialog);
		}
	}
}

System::Void NottyPad::NottyPad_GUI::checkForNewFile(TextBox^ textBox, SaveFileDialog^ saveFileDialog) {

	saveChanges = MessageBox::Show("Are you want to save this changes?", "Warning", MessageBoxButtons::YesNo);
	if (saveChanges == System::Windows::Forms::DialogResult::Yes) {
		dialogResult = saveFileDialog->ShowDialog();
		if (dialogResult == System::Windows::Forms::DialogResult::OK) {
			StreamWriter^ sw = gcnew StreamWriter(saveFileDialog->FileName);
			sw->Write(textBox->Text);
			sw->Close();
			NottyPad_GUI::Text = Path::GetFileName(saveFileDialog->FileName) + " - NottyPad";
			fileEdited = false;
		}
	}
	else {
		textBox->Clear();
		NottyPad_GUI::Text = "Unnamed - NottyPad";
		fileEdited = false;
	}
}

System::Void NottyPad::NottyPad_GUI::checkForOpenFile(TextBox^ textBox, SaveFileDialog^ saveFileDialog) {

	saveChanges = MessageBox::Show("Are you want to save this changes?", "Warning", MessageBoxButtons::YesNo);
	if (saveChanges == System::Windows::Forms::DialogResult::Yes) {
		dialogResult = saveFileDialog->ShowDialog();
		if (dialogResult == System::Windows::Forms::DialogResult::OK) {
			StreamWriter^ sw = gcnew StreamWriter(saveFileDialog->FileName);
			sw->Write(textBox->Text);
			sw->Close();
			NottyPad_GUI::Text = Path::GetFileName(saveFileDialog->FileName) + " - NottyPad";
			fileEdited = false;
		}
	}
	else {
		openFile(textBox, openFileDialog);
	}
}

System::Void NottyPad::NottyPad_GUI::saveFile(TextBox^ textBox, SaveFileDialog^ saveFileDialog) {
	dialogResult = saveFileDialog->ShowDialog();
	if (dialogResult == System::Windows::Forms::DialogResult::OK) {
		StreamWriter^ sw = gcnew StreamWriter(saveFileDialog->FileName);
		sw->Write(textBox->Text);
		sw->Close();
		NottyPad_GUI::Text = Path::GetFileName(saveFileDialog->FileName) + " - NottyPad";
		fileEdited = false;
	}
}

System::Void NottyPad::NottyPad_GUI::openFile(TextBox^ textBox, OpenFileDialog^ openFileDialog) {

	dialogResult = openFileDialog->ShowDialog();
	if (dialogResult == System::Windows::Forms::DialogResult::OK) {
		StreamReader^ sr = gcnew StreamReader(openFileDialog->FileName);
		String^ fileTextString = sr->ReadToEnd();
		textBox->Text = fileTextString;
		NottyPad_GUI::Text = Path::GetFileName(openFileDialog->FileName) + " - NottyPad";
		fileEdited = false;
	}

}


//Tool Strip Menu Events
System::Void NottyPad::NottyPad_GUI::newToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!fileEdited) {
		textBox_Note->Clear();
		NottyPad_GUI::Text = "Unnamed - NottyPad";
	}
	else {
		checkForNewFile(textBox_Note, saveFileDialog);
	}
}

System::Void NottyPad::NottyPad_GUI::openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!fileEdited) {
		openFile(textBox_Note, openFileDialog);
	}
	else {
		checkForOpenFile(textBox_Note, saveFileDialog);
	}
}

System::Void NottyPad::NottyPad_GUI::exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (fileEdited) {
		saveAndClose(textBox_Note, saveFileDialog);
	}
	Application::Exit();
}

System::Void NottyPad::NottyPad_GUI::aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_About->Show();
}

System::Void NottyPad::NottyPad_GUI::saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

}

System::Void NottyPad::NottyPad_GUI::saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	saveFile(textBox_Note, saveFileDialog);
}

//About Panel Events
System::Void NottyPad::NottyPad_GUI::label_Close_Panel_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_About->Hide();
}

System::Void NottyPad::NottyPad_GUI::panel_About_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ githubURL = "https://github.com/mickiemouse";
	Process::Start(githubURL);
}


//Other Tools
System::Void NottyPad::NottyPad_GUI::textBox_Note_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	fileEdited = true;
}

System::Void NottyPad::NottyPad_GUI::NottyPad_GUI_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (fileEdited) {
		saveAndClose(textBox_Note, saveFileDialog);
	}
}