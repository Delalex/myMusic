#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung f�r Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzuf�gen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_add;
	protected:

	private: System::Windows::Forms::Button^ search_song;
	private: System::Windows::Forms::Button^ search_artist;
	private: System::Windows::Forms::TreeView^ treeView1;
	private: System::Windows::Forms::TextBox^ add_artist;
	private: System::Windows::Forms::TextBox^ add_song_name;
	private: System::Windows::Forms::TextBox^ search_by_name;
	private: System::Windows::Forms::TextBox^ search_by_artist;


	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode f�r die Designerunterst�tzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor ge�ndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->search_song = (gcnew System::Windows::Forms::Button());
			this->search_artist = (gcnew System::Windows::Forms::Button());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->add_artist = (gcnew System::Windows::Forms::TextBox());
			this->add_song_name = (gcnew System::Windows::Forms::TextBox());
			this->search_by_name = (gcnew System::Windows::Forms::TextBox());
			this->search_by_artist = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btn_add
			// 
			this->btn_add->Location = System::Drawing::Point(10, 12);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(172, 31);
			this->btn_add->TabIndex = 0;
			this->btn_add->Text = L"Add song";
			this->btn_add->UseVisualStyleBackColor = true;
			this->btn_add->Click += gcnew System::EventHandler(this, &Form1::btn_add_Click);
			// 
			// search_song
			// 
			this->search_song->Location = System::Drawing::Point(11, 50);
			this->search_song->Name = L"search_song";
			this->search_song->Size = System::Drawing::Size(171, 30);
			this->search_song->TabIndex = 1;
			this->search_song->Text = L"Search for Song";
			this->search_song->UseVisualStyleBackColor = true;
			this->search_song->Click += gcnew System::EventHandler(this, &Form1::search_song_Click);
			// 
			// search_artist
			// 
			this->search_artist->Location = System::Drawing::Point(11, 86);
			this->search_artist->Name = L"search_artist";
			this->search_artist->Size = System::Drawing::Size(171, 30);
			this->search_artist->TabIndex = 2;
			this->search_artist->Text = L"Search for Artist";
			this->search_artist->UseVisualStyleBackColor = true;
			this->search_artist->Click += gcnew System::EventHandler(this, &Form1::search_artist_Click);
			// 
			// treeView1
			// 
			this->treeView1->Location = System::Drawing::Point(13, 132);
			this->treeView1->Name = L"treeView1";
			this->treeView1->Size = System::Drawing::Size(880, 282);
			this->treeView1->TabIndex = 3;
			// 
			// add_artist
			// 
			this->add_artist->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->add_artist->Location = System::Drawing::Point(187, 13);
			this->add_artist->Name = L"add_artist";
			this->add_artist->Size = System::Drawing::Size(354, 29);
			this->add_artist->TabIndex = 4;
			this->add_artist->Text = L"ARTIST";
			this->add_artist->Enter += gcnew System::EventHandler(this, &Form1::add_artist_Enter);
			this->add_artist->Leave += gcnew System::EventHandler(this, &Form1::add_artist_Leave);
			// 
			// add_song_name
			// 
			this->add_song_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->add_song_name->Location = System::Drawing::Point(547, 14);
			this->add_song_name->Name = L"add_song_name";
			this->add_song_name->Size = System::Drawing::Size(354, 29);
			this->add_song_name->TabIndex = 5;
			this->add_song_name->Text = L"SONG NAME";
			this->add_song_name->Enter += gcnew System::EventHandler(this, &Form1::add_song_name_Enter);
			this->add_song_name->Leave += gcnew System::EventHandler(this, &Form1::add_song_name_Leave);
			// 
			// search_by_name
			// 
			this->search_by_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->search_by_name->Location = System::Drawing::Point(189, 50);
			this->search_by_name->Name = L"search_by_name";
			this->search_by_name->Size = System::Drawing::Size(352, 29);
			this->search_by_name->TabIndex = 6;
			this->search_by_name->Text = L"SONG NAME";
			this->search_by_name->Enter += gcnew System::EventHandler(this, &Form1::search_by_name_Enter);
			this->search_by_name->Leave += gcnew System::EventHandler(this, &Form1::search_by_name_Leave);
			// 
			// search_by_artist
			// 
			this->search_by_artist->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->search_by_artist->Location = System::Drawing::Point(189, 86);
			this->search_by_artist->Name = L"search_by_artist";
			this->search_by_artist->Size = System::Drawing::Size(352, 29);
			this->search_by_artist->TabIndex = 7;
			this->search_by_artist->Text = L"ARTIST";
			this->search_by_artist->Enter += gcnew System::EventHandler(this, &Form1::search_by_artist_Enter);
			this->search_by_artist->Leave += gcnew System::EventHandler(this, &Form1::search_by_artist_Leave);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(905, 428);
			this->Controls->Add(this->search_by_artist);
			this->Controls->Add(this->search_by_name);
			this->Controls->Add(this->add_song_name);
			this->Controls->Add(this->add_artist);
			this->Controls->Add(this->treeView1);
			this->Controls->Add(this->search_artist);
			this->Controls->Add(this->search_song);
			this->Controls->Add(this->btn_add);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Form1";
			this->Text = L"myMusic";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) 
	{
	}
	private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e)
	{
		add_artist->Text = "ARTIST";
		add_song_name->Text = "SONG NAME";
	}

	// HINTS FOR SONG ADDER
	private: System::Void add_artist_Enter(System::Object^ sender, System::EventArgs^ e) 
	{
		add_artist->Text = "";
	}
	private: System::Void add_song_name_Enter(System::Object^ sender, System::EventArgs^ e) 
	{
		add_song_name->Text = "";
	}
	private: System::Void add_artist_Leave(System::Object^ sender, System::EventArgs^ e) 
	{
		if(add_artist->TextLength < 1)
			add_artist->Text = "ARTIST";
	}
	private: System::Void add_song_name_Leave(System::Object^ sender, System::EventArgs^ e) 
	{
		if (add_song_name->TextLength < 1)
			add_song_name->Text = "SONG NAME";
	}
	
	// HINTS FOR SEARCH BY SONG NAME
	private: System::Void search_by_name_Enter(System::Object^ sender, System::EventArgs^ e) 
	{
		search_by_name->Text = "";
	}
	private: System::Void search_by_name_Leave(System::Object^ sender, System::EventArgs^ e) 
	{
		if (search_by_name->TextLength < 1)
			search_by_name->Text = "SONG NAME";
	}
	private: System::Void search_song_Click(System::Object^ sender, System::EventArgs^ e)
	{
		search_by_name->Text = "SONG NAME";
	}

	// HINTS FOR SEARCH BY ARTIST
	private: System::Void search_artist_Click(System::Object^ sender, System::EventArgs^ e)
	{
		search_by_artist->Text = "ARTIST";
	}
	private: System::Void search_by_artist_Enter(System::Object^ sender, System::EventArgs^ e) 
	{
		search_by_artist->Text = "";
	}
	private: System::Void search_by_artist_Leave(System::Object^ sender, System::EventArgs^ e) 
	{
		if (search_by_artist->TextLength < 1)
			search_by_artist->Text = "ARTIST";
	}
};
}
