#pragma once
#include <exception>
#include "Strategy.h"
#include "GestionClients.h"
#include "GestionCommandes.h"
#include "GestionPersonnel.h"
#include "GestionStock.h"
#include "GestionStatistiques.h"

namespace ProjectCPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace MySql::Data::MySqlClient;

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

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Button^ annulerBouton;


	private: System::Windows::Forms::TextBox^ nomClient;
	private: System::Windows::Forms::TextBox^ prenomClient;
	private: System::Windows::Forms::TextBox^ jour_date_naissanceClient;
	private: System::Windows::Forms::TextBox^ rue_adresse_livraisonClient;







	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;



	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ clientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ creerclientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modifierclientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerclientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ rechercherclientToolStripMenuItem;




	private: System::Windows::Forms::ToolStripMenuItem^ commandeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nouveaucommandeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modifiercommandeToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimercommandeToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ recherchercommandeToolStripMenuItem1;




	private: System::Windows::Forms::ToolStripMenuItem^ stockToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nouveaustockToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ modifierstockToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerstockToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ rechercherstockToolStripMenuItem2;





	private: System::Windows::Forms::ToolStripMenuItem^ personnelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nouveaupersonnelToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ modifierpersonnelToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerpersonnelToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ rechercherpersonnelToolStripMenuItem3;




	private: System::Windows::Forms::ToolStripMenuItem^ statistiquesToolStripMenuItem;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::GroupBox^ groupBoxClient;
	private: System::Windows::Forms::Button^ validerBouton;


	private: System::Windows::Forms::TextBox^ annee_date_naissanceClient;

	private: System::Windows::Forms::TextBox^ mois_date_naissanceClient;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ code_postal_adresse_livraisonClient;

	private: System::Windows::Forms::TextBox^ ville_adresse_livraisonClient;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::TextBox^ code_postal_adresse_facturationClient;

private: System::Windows::Forms::TextBox^ ville_adresse_facturationClient;

private: System::Windows::Forms::TextBox^ rue_adresse_facturationClient;
private: System::Windows::Forms::GroupBox^ groupBoxCommande;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label5;

private: System::Windows::Forms::TextBox^ type_paiementCommande;



private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ annee_date_livraisonCommande;

private: System::Windows::Forms::TextBox^ annee_date_reglementCommande;

private: System::Windows::Forms::TextBox^ annee_date_paiementCommande;

private: System::Windows::Forms::TextBox^ annee_date_emissionCommande;
private: System::Windows::Forms::TextBox^ mois_date_livraisonCommande;


private: System::Windows::Forms::TextBox^ mois_date_reglementCommande;

private: System::Windows::Forms::TextBox^ mois_date_paiementCommande;

private: System::Windows::Forms::TextBox^ mois_date_emissionCommande;
private: System::Windows::Forms::TextBox^ jour_date_livraisonCommande;


private: System::Windows::Forms::TextBox^ jour_date_reglementCommande;

private: System::Windows::Forms::TextBox^ jour_date_paiementCommande;

private: System::Windows::Forms::TextBox^ jour_date_emissionCommande;
private: System::Windows::Forms::GroupBox^ groupBoxPersonnel;




private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::Label^ label57;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label59;
private: System::Windows::Forms::Label^ label60;
private: System::Windows::Forms::TextBox^ prenomPersonnel;

private: System::Windows::Forms::TextBox^ nomPersonnel;

private: System::Windows::Forms::Label^ label63;
private: System::Windows::Forms::TextBox^ annee_date_embauchePersonnel;

private: System::Windows::Forms::TextBox^ mois_date_embauchePersonnel;

private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::TextBox^ jour_date_embauchePersonnel;
private: System::Windows::Forms::TextBox^ code_postal_adresse_livraisonPersonnel;


private: System::Windows::Forms::TextBox^ rue_adresse_livraisonPersonnel;
private: System::Windows::Forms::TextBox^ ville_adresse_livraisonPersonnel;
private: System::Windows::Forms::GroupBox^ groupBoxStock;
private: System::Windows::Forms::ComboBox^ couleur;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label68;
private: System::Windows::Forms::TextBox^ TVAStock;
private: System::Windows::Forms::TextBox^ prixHTStock;
private: System::Windows::Forms::TextBox^ referenceStock;






	protected:

	private:
		Strategy^ strategy_;
private: System::Windows::Forms::TextBox^ textBoxID;
private: System::Windows::Forms::Label^ labelID;

	   String^ typeStrategy;
	   String^ typeGestion;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->annulerBouton = (gcnew System::Windows::Forms::Button());
			this->nomClient = (gcnew System::Windows::Forms::TextBox());
			this->prenomClient = (gcnew System::Windows::Forms::TextBox());
			this->jour_date_naissanceClient = (gcnew System::Windows::Forms::TextBox());
			this->rue_adresse_livraisonClient = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->clientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->creerclientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifierclientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerclientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rechercherclientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->commandeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nouveaucommandeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifiercommandeToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimercommandeToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->recherchercommandeToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stockToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nouveaustockToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifierstockToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerstockToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rechercherstockToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->personnelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nouveaupersonnelToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifierpersonnelToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerpersonnelToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rechercherpersonnelToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statistiquesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->groupBoxClient = (gcnew System::Windows::Forms::GroupBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->code_postal_adresse_facturationClient = (gcnew System::Windows::Forms::TextBox());
			this->ville_adresse_facturationClient = (gcnew System::Windows::Forms::TextBox());
			this->rue_adresse_facturationClient = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->code_postal_adresse_livraisonClient = (gcnew System::Windows::Forms::TextBox());
			this->ville_adresse_livraisonClient = (gcnew System::Windows::Forms::TextBox());
			this->annee_date_naissanceClient = (gcnew System::Windows::Forms::TextBox());
			this->mois_date_naissanceClient = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxPersonnel = (gcnew System::Windows::Forms::GroupBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->prenomPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->nomPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->annee_date_embauchePersonnel = (gcnew System::Windows::Forms::TextBox());
			this->mois_date_embauchePersonnel = (gcnew System::Windows::Forms::TextBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->jour_date_embauchePersonnel = (gcnew System::Windows::Forms::TextBox());
			this->code_postal_adresse_livraisonPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->rue_adresse_livraisonPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->ville_adresse_livraisonPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxCommande = (gcnew System::Windows::Forms::GroupBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->type_paiementCommande = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->annee_date_livraisonCommande = (gcnew System::Windows::Forms::TextBox());
			this->annee_date_reglementCommande = (gcnew System::Windows::Forms::TextBox());
			this->annee_date_paiementCommande = (gcnew System::Windows::Forms::TextBox());
			this->annee_date_emissionCommande = (gcnew System::Windows::Forms::TextBox());
			this->mois_date_livraisonCommande = (gcnew System::Windows::Forms::TextBox());
			this->mois_date_reglementCommande = (gcnew System::Windows::Forms::TextBox());
			this->mois_date_paiementCommande = (gcnew System::Windows::Forms::TextBox());
			this->mois_date_emissionCommande = (gcnew System::Windows::Forms::TextBox());
			this->jour_date_livraisonCommande = (gcnew System::Windows::Forms::TextBox());
			this->jour_date_reglementCommande = (gcnew System::Windows::Forms::TextBox());
			this->jour_date_paiementCommande = (gcnew System::Windows::Forms::TextBox());
			this->jour_date_emissionCommande = (gcnew System::Windows::Forms::TextBox());
			this->validerBouton = (gcnew System::Windows::Forms::Button());
			this->groupBoxStock = (gcnew System::Windows::Forms::GroupBox());
			this->couleur = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->TVAStock = (gcnew System::Windows::Forms::TextBox());
			this->prixHTStock = (gcnew System::Windows::Forms::TextBox());
			this->referenceStock = (gcnew System::Windows::Forms::TextBox());
			this->textBoxID = (gcnew System::Windows::Forms::TextBox());
			this->labelID = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->groupBoxClient->SuspendLayout();
			this->groupBoxPersonnel->SuspendLayout();
			this->groupBoxCommande->SuspendLayout();
			this->groupBoxStock->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(580, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(819, 444);
			this->dataGridView1->TabIndex = 1;
			// 
			// annulerBouton
			// 
			this->annulerBouton->Location = System::Drawing::Point(12, 403);
			this->annulerBouton->Name = L"annulerBouton";
			this->annulerBouton->Size = System::Drawing::Size(127, 40);
			this->annulerBouton->TabIndex = 2;
			this->annulerBouton->Text = L"Annuler";
			this->annulerBouton->UseVisualStyleBackColor = true;
			// 
			// nomClient
			// 
			this->nomClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nomClient->Location = System::Drawing::Point(189, 10);
			this->nomClient->Name = L"nomClient";
			this->nomClient->Size = System::Drawing::Size(202, 22);
			this->nomClient->TabIndex = 3;
			// 
			// prenomClient
			// 
			this->prenomClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prenomClient->Location = System::Drawing::Point(189, 52);
			this->prenomClient->Name = L"prenomClient";
			this->prenomClient->Size = System::Drawing::Size(202, 22);
			this->prenomClient->TabIndex = 3;
			// 
			// jour_date_naissanceClient
			// 
			this->jour_date_naissanceClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->jour_date_naissanceClient->Location = System::Drawing::Point(189, 102);
			this->jour_date_naissanceClient->Name = L"jour_date_naissanceClient";
			this->jour_date_naissanceClient->Size = System::Drawing::Size(27, 22);
			this->jour_date_naissanceClient->TabIndex = 3;
			// 
			// rue_adresse_livraisonClient
			// 
			this->rue_adresse_livraisonClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->rue_adresse_livraisonClient->Location = System::Drawing::Point(249, 150);
			this->rue_adresse_livraisonClient->Name = L"rue_adresse_livraisonClient";
			this->rue_adresse_livraisonClient->Size = System::Drawing::Size(142, 22);
			this->rue_adresse_livraisonClient->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(126, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"nom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(105, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"prenom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(57, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"date naissance";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(31, 188);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"adresse livraison";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->clientToolStripMenuItem,
					this->commandeToolStripMenuItem, this->stockToolStripMenuItem, this->personnelToolStripMenuItem, this->statistiquesToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1422, 28);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// clientToolStripMenuItem
			// 
			this->clientToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->creerclientToolStripMenuItem,
					this->modifierclientToolStripMenuItem, this->supprimerclientToolStripMenuItem, this->rechercherclientToolStripMenuItem
			});
			this->clientToolStripMenuItem->Name = L"clientToolStripMenuItem";
			this->clientToolStripMenuItem->Size = System::Drawing::Size(61, 24);
			this->clientToolStripMenuItem->Text = L"Client";
			// 
			// creerclientToolStripMenuItem
			// 
			this->creerclientToolStripMenuItem->Name = L"creerclientToolStripMenuItem";
			this->creerclientToolStripMenuItem->Size = System::Drawing::Size(165, 26);
			this->creerclientToolStripMenuItem->Text = L"Nouveau";
			this->creerclientToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::creerToolStripMenuItem_Click);
			// 
			// modifierclientToolStripMenuItem
			// 
			this->modifierclientToolStripMenuItem->Name = L"modifierclientToolStripMenuItem";
			this->modifierclientToolStripMenuItem->Size = System::Drawing::Size(165, 26);
			this->modifierclientToolStripMenuItem->Text = L"Modifier";
			this->modifierclientToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::modifierToolStripMenuItem_Click);
			// 
			// supprimerclientToolStripMenuItem
			// 
			this->supprimerclientToolStripMenuItem->Name = L"supprimerclientToolStripMenuItem";
			this->supprimerclientToolStripMenuItem->Size = System::Drawing::Size(165, 26);
			this->supprimerclientToolStripMenuItem->Text = L"Supprimer";
			this->supprimerclientToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::supprimerToolStripMenuItem_Click);
			// 
			// rechercherclientToolStripMenuItem
			// 
			this->rechercherclientToolStripMenuItem->Name = L"rechercherclientToolStripMenuItem";
			this->rechercherclientToolStripMenuItem->Size = System::Drawing::Size(165, 26);
			this->rechercherclientToolStripMenuItem->Text = L"Rechercher";
			this->rechercherclientToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::rechercherclientToolStripMenuItem_Click);
			// 
			// commandeToolStripMenuItem
			// 
			this->commandeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->nouveaucommandeToolStripMenuItem,
					this->modifiercommandeToolStripMenuItem1, this->supprimercommandeToolStripMenuItem1, this->recherchercommandeToolStripMenuItem1
			});
			this->commandeToolStripMenuItem->Name = L"commandeToolStripMenuItem";
			this->commandeToolStripMenuItem->Size = System::Drawing::Size(100, 24);
			this->commandeToolStripMenuItem->Text = L"Commande";
			// 
			// nouveaucommandeToolStripMenuItem
			// 
			this->nouveaucommandeToolStripMenuItem->Name = L"nouveaucommandeToolStripMenuItem";
			this->nouveaucommandeToolStripMenuItem->Size = System::Drawing::Size(165, 26);
			this->nouveaucommandeToolStripMenuItem->Text = L"Nouveau";
			this->nouveaucommandeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::nouveaucommandeToolStripMenuItem_Click);
			// 
			// modifiercommandeToolStripMenuItem1
			// 
			this->modifiercommandeToolStripMenuItem1->Name = L"modifiercommandeToolStripMenuItem1";
			this->modifiercommandeToolStripMenuItem1->Size = System::Drawing::Size(165, 26);
			this->modifiercommandeToolStripMenuItem1->Text = L"Modifier";
			this->modifiercommandeToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::modifiercommandeToolStripMenuItem1_Click);
			// 
			// supprimercommandeToolStripMenuItem1
			// 
			this->supprimercommandeToolStripMenuItem1->Name = L"supprimercommandeToolStripMenuItem1";
			this->supprimercommandeToolStripMenuItem1->Size = System::Drawing::Size(165, 26);
			this->supprimercommandeToolStripMenuItem1->Text = L"Supprimer";
			this->supprimercommandeToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::supprimercommandeToolStripMenuItem1_Click);
			// 
			// recherchercommandeToolStripMenuItem1
			// 
			this->recherchercommandeToolStripMenuItem1->Name = L"recherchercommandeToolStripMenuItem1";
			this->recherchercommandeToolStripMenuItem1->Size = System::Drawing::Size(165, 26);
			this->recherchercommandeToolStripMenuItem1->Text = L"Rechercher";
			this->recherchercommandeToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::recherchercommandeToolStripMenuItem1_Click);
			// 
			// stockToolStripMenuItem
			// 
			this->stockToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->nouveaustockToolStripMenuItem1,
					this->modifierstockToolStripMenuItem2, this->supprimerstockToolStripMenuItem2, this->rechercherstockToolStripMenuItem2
			});
			this->stockToolStripMenuItem->Name = L"stockToolStripMenuItem";
			this->stockToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->stockToolStripMenuItem->Text = L"Stock";
			// 
			// nouveaustockToolStripMenuItem1
			// 
			this->nouveaustockToolStripMenuItem1->Name = L"nouveaustockToolStripMenuItem1";
			this->nouveaustockToolStripMenuItem1->Size = System::Drawing::Size(165, 26);
			this->nouveaustockToolStripMenuItem1->Text = L"Nouveau";
			this->nouveaustockToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::nouveaustockToolStripMenuItem1_Click);
			// 
			// modifierstockToolStripMenuItem2
			// 
			this->modifierstockToolStripMenuItem2->Name = L"modifierstockToolStripMenuItem2";
			this->modifierstockToolStripMenuItem2->Size = System::Drawing::Size(165, 26);
			this->modifierstockToolStripMenuItem2->Text = L"Modifier";
			this->modifierstockToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::modifierstockToolStripMenuItem2_Click);
			// 
			// supprimerstockToolStripMenuItem2
			// 
			this->supprimerstockToolStripMenuItem2->Name = L"supprimerstockToolStripMenuItem2";
			this->supprimerstockToolStripMenuItem2->Size = System::Drawing::Size(165, 26);
			this->supprimerstockToolStripMenuItem2->Text = L"Supprimer";
			this->supprimerstockToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::supprimerstockToolStripMenuItem2_Click);
			// 
			// rechercherstockToolStripMenuItem2
			// 
			this->rechercherstockToolStripMenuItem2->Name = L"rechercherstockToolStripMenuItem2";
			this->rechercherstockToolStripMenuItem2->Size = System::Drawing::Size(165, 26);
			this->rechercherstockToolStripMenuItem2->Text = L"Rechercher";
			this->rechercherstockToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::rechercherstockToolStripMenuItem2_Click);
			// 
			// personnelToolStripMenuItem
			// 
			this->personnelToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->nouveaupersonnelToolStripMenuItem2,
					this->modifierpersonnelToolStripMenuItem3, this->supprimerpersonnelToolStripMenuItem3, this->rechercherpersonnelToolStripMenuItem3
			});
			this->personnelToolStripMenuItem->Name = L"personnelToolStripMenuItem";
			this->personnelToolStripMenuItem->Size = System::Drawing::Size(86, 24);
			this->personnelToolStripMenuItem->Text = L"Personnel";
			// 
			// nouveaupersonnelToolStripMenuItem2
			// 
			this->nouveaupersonnelToolStripMenuItem2->Name = L"nouveaupersonnelToolStripMenuItem2";
			this->nouveaupersonnelToolStripMenuItem2->Size = System::Drawing::Size(165, 26);
			this->nouveaupersonnelToolStripMenuItem2->Text = L"Nouveau";
			this->nouveaupersonnelToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::nouveaupersonnelToolStripMenuItem2_Click);
			// 
			// modifierpersonnelToolStripMenuItem3
			// 
			this->modifierpersonnelToolStripMenuItem3->Name = L"modifierpersonnelToolStripMenuItem3";
			this->modifierpersonnelToolStripMenuItem3->Size = System::Drawing::Size(165, 26);
			this->modifierpersonnelToolStripMenuItem3->Text = L"Modifier";
			this->modifierpersonnelToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::modifierpersonnelToolStripMenuItem3_Click);
			// 
			// supprimerpersonnelToolStripMenuItem3
			// 
			this->supprimerpersonnelToolStripMenuItem3->Name = L"supprimerpersonnelToolStripMenuItem3";
			this->supprimerpersonnelToolStripMenuItem3->Size = System::Drawing::Size(165, 26);
			this->supprimerpersonnelToolStripMenuItem3->Text = L"Supprimer";
			this->supprimerpersonnelToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::supprimerpersonnelToolStripMenuItem3_Click);
			// 
			// rechercherpersonnelToolStripMenuItem3
			// 
			this->rechercherpersonnelToolStripMenuItem3->Name = L"rechercherpersonnelToolStripMenuItem3";
			this->rechercherpersonnelToolStripMenuItem3->Size = System::Drawing::Size(165, 26);
			this->rechercherpersonnelToolStripMenuItem3->Text = L"Rechercher";
			this->rechercherpersonnelToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::rechercherpersonnelToolStripMenuItem3_Click);
			// 
			// statistiquesToolStripMenuItem
			// 
			this->statistiquesToolStripMenuItem->Name = L"statistiquesToolStripMenuItem";
			this->statistiquesToolStripMenuItem->Size = System::Drawing::Size(99, 24);
			this->statistiquesToolStripMenuItem->Text = L"Statistiques";
			// 
			// groupBoxClient
			// 
			this->groupBoxClient->Controls->Add(this->label13);
			this->groupBoxClient->Controls->Add(this->label14);
			this->groupBoxClient->Controls->Add(this->code_postal_adresse_facturationClient);
			this->groupBoxClient->Controls->Add(this->ville_adresse_facturationClient);
			this->groupBoxClient->Controls->Add(this->rue_adresse_facturationClient);
			this->groupBoxClient->Controls->Add(this->label11);
			this->groupBoxClient->Controls->Add(this->label10);
			this->groupBoxClient->Controls->Add(this->label9);
			this->groupBoxClient->Controls->Add(this->label8);
			this->groupBoxClient->Controls->Add(this->label7);
			this->groupBoxClient->Controls->Add(this->label6);
			this->groupBoxClient->Controls->Add(this->label1);
			this->groupBoxClient->Controls->Add(this->nomClient);
			this->groupBoxClient->Controls->Add(this->label4);
			this->groupBoxClient->Controls->Add(this->code_postal_adresse_livraisonClient);
			this->groupBoxClient->Controls->Add(this->ville_adresse_livraisonClient);
			this->groupBoxClient->Controls->Add(this->rue_adresse_livraisonClient);
			this->groupBoxClient->Controls->Add(this->label2);
			this->groupBoxClient->Controls->Add(this->label3);
			this->groupBoxClient->Controls->Add(this->prenomClient);
			this->groupBoxClient->Controls->Add(this->annee_date_naissanceClient);
			this->groupBoxClient->Controls->Add(this->mois_date_naissanceClient);
			this->groupBoxClient->Controls->Add(this->jour_date_naissanceClient);
			this->groupBoxClient->Location = System::Drawing::Point(164, 32);
			this->groupBoxClient->Name = L"groupBoxClient";
			this->groupBoxClient->Size = System::Drawing::Size(397, 403);
			this->groupBoxClient->TabIndex = 6;
			this->groupBoxClient->TabStop = false;
			this->groupBoxClient->Text = L"Client";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(148, 272);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(96, 85);
			this->label13->TabIndex = 12;
			this->label13->Text = L"->Rue\r\n\r\n->Ville\r\n\r\n->Code postal";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(16, 307);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(130, 17);
			this->label14->TabIndex = 11;
			this->label14->Text = L"adresse facturation";
			// 
			// code_postal_adresse_facturationClient
			// 
			this->code_postal_adresse_facturationClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->code_postal_adresse_facturationClient->Location = System::Drawing::Point(249, 337);
			this->code_postal_adresse_facturationClient->Name = L"code_postal_adresse_facturationClient";
			this->code_postal_adresse_facturationClient->Size = System::Drawing::Size(142, 22);
			this->code_postal_adresse_facturationClient->TabIndex = 8;
			// 
			// ville_adresse_facturationClient
			// 
			this->ville_adresse_facturationClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ville_adresse_facturationClient->Location = System::Drawing::Point(249, 302);
			this->ville_adresse_facturationClient->Name = L"ville_adresse_facturationClient";
			this->ville_adresse_facturationClient->Size = System::Drawing::Size(142, 22);
			this->ville_adresse_facturationClient->TabIndex = 9;
			// 
			// rue_adresse_facturationClient
			// 
			this->rue_adresse_facturationClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->rue_adresse_facturationClient->Location = System::Drawing::Point(249, 269);
			this->rue_adresse_facturationClient->Name = L"rue_adresse_facturationClient";
			this->rue_adresse_facturationClient->Size = System::Drawing::Size(142, 22);
			this->rue_adresse_facturationClient->TabIndex = 10;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(148, 155);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(96, 85);
			this->label11->TabIndex = 7;
			this->label11->Text = L"->Rue\r\n\r\n->Ville\r\n\r\n->Code postal";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(226, 105);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(12, 17);
			this->label10->TabIndex = 6;
			this->label10->Text = L"/";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(289, 105);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(12, 17);
			this->label9->TabIndex = 6;
			this->label9->Text = L"/";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(349, 82);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(17, 17);
			this->label8->TabIndex = 5;
			this->label8->Text = L"A";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(253, 82);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(19, 17);
			this->label7->TabIndex = 5;
			this->label7->Text = L"M";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(195, 82);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(15, 17);
			this->label6->TabIndex = 5;
			this->label6->Text = L"J";
			// 
			// code_postal_adresse_livraisonClient
			// 
			this->code_postal_adresse_livraisonClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->code_postal_adresse_livraisonClient->Location = System::Drawing::Point(249, 218);
			this->code_postal_adresse_livraisonClient->Name = L"code_postal_adresse_livraisonClient";
			this->code_postal_adresse_livraisonClient->Size = System::Drawing::Size(142, 22);
			this->code_postal_adresse_livraisonClient->TabIndex = 3;
			// 
			// ville_adresse_livraisonClient
			// 
			this->ville_adresse_livraisonClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ville_adresse_livraisonClient->Location = System::Drawing::Point(249, 183);
			this->ville_adresse_livraisonClient->Name = L"ville_adresse_livraisonClient";
			this->ville_adresse_livraisonClient->Size = System::Drawing::Size(142, 22);
			this->ville_adresse_livraisonClient->TabIndex = 3;
			// 
			// annee_date_naissanceClient
			// 
			this->annee_date_naissanceClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->annee_date_naissanceClient->Location = System::Drawing::Point(312, 102);
			this->annee_date_naissanceClient->Name = L"annee_date_naissanceClient";
			this->annee_date_naissanceClient->Size = System::Drawing::Size(79, 22);
			this->annee_date_naissanceClient->TabIndex = 3;
			// 
			// mois_date_naissanceClient
			// 
			this->mois_date_naissanceClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->mois_date_naissanceClient->Location = System::Drawing::Point(249, 102);
			this->mois_date_naissanceClient->Name = L"mois_date_naissanceClient";
			this->mois_date_naissanceClient->Size = System::Drawing::Size(27, 22);
			this->mois_date_naissanceClient->TabIndex = 3;
			// 
			// groupBoxPersonnel
			// 
			this->groupBoxPersonnel->Controls->Add(this->label41);
			this->groupBoxPersonnel->Controls->Add(this->label45);
			this->groupBoxPersonnel->Controls->Add(this->label49);
			this->groupBoxPersonnel->Controls->Add(this->label53);
			this->groupBoxPersonnel->Controls->Add(this->label57);
			this->groupBoxPersonnel->Controls->Add(this->label40);
			this->groupBoxPersonnel->Controls->Add(this->label59);
			this->groupBoxPersonnel->Controls->Add(this->label60);
			this->groupBoxPersonnel->Controls->Add(this->prenomPersonnel);
			this->groupBoxPersonnel->Controls->Add(this->nomPersonnel);
			this->groupBoxPersonnel->Controls->Add(this->label63);
			this->groupBoxPersonnel->Controls->Add(this->annee_date_embauchePersonnel);
			this->groupBoxPersonnel->Controls->Add(this->mois_date_embauchePersonnel);
			this->groupBoxPersonnel->Controls->Add(this->label39);
			this->groupBoxPersonnel->Controls->Add(this->jour_date_embauchePersonnel);
			this->groupBoxPersonnel->Controls->Add(this->code_postal_adresse_livraisonPersonnel);
			this->groupBoxPersonnel->Controls->Add(this->rue_adresse_livraisonPersonnel);
			this->groupBoxPersonnel->Controls->Add(this->ville_adresse_livraisonPersonnel);
			this->groupBoxPersonnel->Location = System::Drawing::Point(164, 33);
			this->groupBoxPersonnel->Name = L"groupBoxPersonnel";
			this->groupBoxPersonnel->Size = System::Drawing::Size(397, 403);
			this->groupBoxPersonnel->TabIndex = 7;
			this->groupBoxPersonnel->TabStop = false;
			this->groupBoxPersonnel->Text = L"Personnel";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(226, 167);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(12, 17);
			this->label41->TabIndex = 6;
			this->label41->Text = L"/";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(289, 167);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(12, 17);
			this->label45->TabIndex = 6;
			this->label45->Text = L"/";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(349, 144);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(17, 17);
			this->label49->TabIndex = 5;
			this->label49->Text = L"A";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(253, 144);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(19, 17);
			this->label53->TabIndex = 5;
			this->label53->Text = L"M";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(195, 144);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(15, 17);
			this->label57->TabIndex = 5;
			this->label57->Text = L"J";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(148, 240);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(96, 85);
			this->label40->TabIndex = 7;
			this->label40->Text = L"->Rue\r\n\r\n->Ville\r\n\r\n->Code postal";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(102, 101);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(56, 17);
			this->label59->TabIndex = 4;
			this->label59->Text = L"prenom";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(123, 41);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(35, 17);
			this->label60->TabIndex = 4;
			this->label60->Text = L"nom";
			// 
			// prenomPersonnel
			// 
			this->prenomPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prenomPersonnel->Location = System::Drawing::Point(189, 98);
			this->prenomPersonnel->Name = L"prenomPersonnel";
			this->prenomPersonnel->Size = System::Drawing::Size(202, 22);
			this->prenomPersonnel->TabIndex = 3;
			// 
			// nomPersonnel
			// 
			this->nomPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nomPersonnel->Location = System::Drawing::Point(189, 42);
			this->nomPersonnel->Name = L"nomPersonnel";
			this->nomPersonnel->Size = System::Drawing::Size(202, 22);
			this->nomPersonnel->TabIndex = 3;
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Location = System::Drawing::Point(52, 169);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(106, 17);
			this->label63->TabIndex = 4;
			this->label63->Text = L"date embauche";
			// 
			// annee_date_embauchePersonnel
			// 
			this->annee_date_embauchePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->annee_date_embauchePersonnel->Location = System::Drawing::Point(312, 164);
			this->annee_date_embauchePersonnel->Name = L"annee_date_embauchePersonnel";
			this->annee_date_embauchePersonnel->Size = System::Drawing::Size(79, 22);
			this->annee_date_embauchePersonnel->TabIndex = 3;
			// 
			// mois_date_embauchePersonnel
			// 
			this->mois_date_embauchePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->mois_date_embauchePersonnel->Location = System::Drawing::Point(249, 164);
			this->mois_date_embauchePersonnel->Name = L"mois_date_embauchePersonnel";
			this->mois_date_embauchePersonnel->Size = System::Drawing::Size(27, 22);
			this->mois_date_embauchePersonnel->TabIndex = 3;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(31, 273);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(115, 17);
			this->label39->TabIndex = 4;
			this->label39->Text = L"adresse livraison";
			// 
			// jour_date_embauchePersonnel
			// 
			this->jour_date_embauchePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->jour_date_embauchePersonnel->Location = System::Drawing::Point(189, 164);
			this->jour_date_embauchePersonnel->Name = L"jour_date_embauchePersonnel";
			this->jour_date_embauchePersonnel->Size = System::Drawing::Size(27, 22);
			this->jour_date_embauchePersonnel->TabIndex = 3;
			// 
			// code_postal_adresse_livraisonPersonnel
			// 
			this->code_postal_adresse_livraisonPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->code_postal_adresse_livraisonPersonnel->Location = System::Drawing::Point(249, 303);
			this->code_postal_adresse_livraisonPersonnel->Name = L"code_postal_adresse_livraisonPersonnel";
			this->code_postal_adresse_livraisonPersonnel->Size = System::Drawing::Size(142, 22);
			this->code_postal_adresse_livraisonPersonnel->TabIndex = 3;
			// 
			// rue_adresse_livraisonPersonnel
			// 
			this->rue_adresse_livraisonPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->rue_adresse_livraisonPersonnel->Location = System::Drawing::Point(249, 235);
			this->rue_adresse_livraisonPersonnel->Name = L"rue_adresse_livraisonPersonnel";
			this->rue_adresse_livraisonPersonnel->Size = System::Drawing::Size(142, 22);
			this->rue_adresse_livraisonPersonnel->TabIndex = 3;
			// 
			// ville_adresse_livraisonPersonnel
			// 
			this->ville_adresse_livraisonPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ville_adresse_livraisonPersonnel->Location = System::Drawing::Point(249, 268);
			this->ville_adresse_livraisonPersonnel->Name = L"ville_adresse_livraisonPersonnel";
			this->ville_adresse_livraisonPersonnel->Size = System::Drawing::Size(142, 22);
			this->ville_adresse_livraisonPersonnel->TabIndex = 3;
			// 
			// groupBoxCommande
			// 
			this->groupBoxCommande->Controls->Add(this->label38);
			this->groupBoxCommande->Controls->Add(this->label32);
			this->groupBoxCommande->Controls->Add(this->label26);
			this->groupBoxCommande->Controls->Add(this->label16);
			this->groupBoxCommande->Controls->Add(this->label37);
			this->groupBoxCommande->Controls->Add(this->label31);
			this->groupBoxCommande->Controls->Add(this->label25);
			this->groupBoxCommande->Controls->Add(this->label17);
			this->groupBoxCommande->Controls->Add(this->label36);
			this->groupBoxCommande->Controls->Add(this->label30);
			this->groupBoxCommande->Controls->Add(this->label23);
			this->groupBoxCommande->Controls->Add(this->label18);
			this->groupBoxCommande->Controls->Add(this->label35);
			this->groupBoxCommande->Controls->Add(this->label29);
			this->groupBoxCommande->Controls->Add(this->label22);
			this->groupBoxCommande->Controls->Add(this->label19);
			this->groupBoxCommande->Controls->Add(this->label34);
			this->groupBoxCommande->Controls->Add(this->label28);
			this->groupBoxCommande->Controls->Add(this->label15);
			this->groupBoxCommande->Controls->Add(this->label20);
			this->groupBoxCommande->Controls->Add(this->label5);
			this->groupBoxCommande->Controls->Add(this->type_paiementCommande);
			this->groupBoxCommande->Controls->Add(this->label33);
			this->groupBoxCommande->Controls->Add(this->label27);
			this->groupBoxCommande->Controls->Add(this->label12);
			this->groupBoxCommande->Controls->Add(this->label24);
			this->groupBoxCommande->Controls->Add(this->annee_date_livraisonCommande);
			this->groupBoxCommande->Controls->Add(this->annee_date_reglementCommande);
			this->groupBoxCommande->Controls->Add(this->annee_date_paiementCommande);
			this->groupBoxCommande->Controls->Add(this->annee_date_emissionCommande);
			this->groupBoxCommande->Controls->Add(this->mois_date_livraisonCommande);
			this->groupBoxCommande->Controls->Add(this->mois_date_reglementCommande);
			this->groupBoxCommande->Controls->Add(this->mois_date_paiementCommande);
			this->groupBoxCommande->Controls->Add(this->mois_date_emissionCommande);
			this->groupBoxCommande->Controls->Add(this->jour_date_livraisonCommande);
			this->groupBoxCommande->Controls->Add(this->jour_date_reglementCommande);
			this->groupBoxCommande->Controls->Add(this->jour_date_paiementCommande);
			this->groupBoxCommande->Controls->Add(this->jour_date_emissionCommande);
			this->groupBoxCommande->Location = System::Drawing::Point(165, 31);
			this->groupBoxCommande->Name = L"groupBoxCommande";
			this->groupBoxCommande->Size = System::Drawing::Size(397, 403);
			this->groupBoxCommande->TabIndex = 7;
			this->groupBoxCommande->TabStop = false;
			this->groupBoxCommande->Text = L"Commande";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(226, 324);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(12, 17);
			this->label38->TabIndex = 6;
			this->label38->Text = L"/";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(226, 264);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(12, 17);
			this->label32->TabIndex = 6;
			this->label32->Text = L"/";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(226, 207);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(12, 17);
			this->label26->TabIndex = 6;
			this->label26->Text = L"/";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(226, 149);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(12, 17);
			this->label16->TabIndex = 6;
			this->label16->Text = L"/";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(289, 324);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(12, 17);
			this->label37->TabIndex = 6;
			this->label37->Text = L"/";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(289, 264);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(12, 17);
			this->label31->TabIndex = 6;
			this->label31->Text = L"/";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(289, 207);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(12, 17);
			this->label25->TabIndex = 6;
			this->label25->Text = L"/";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(289, 149);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(12, 17);
			this->label17->TabIndex = 6;
			this->label17->Text = L"/";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(349, 301);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(17, 17);
			this->label36->TabIndex = 5;
			this->label36->Text = L"A";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(349, 241);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(17, 17);
			this->label30->TabIndex = 5;
			this->label30->Text = L"A";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(349, 184);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(17, 17);
			this->label23->TabIndex = 5;
			this->label23->Text = L"A";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(349, 126);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(17, 17);
			this->label18->TabIndex = 5;
			this->label18->Text = L"A";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(253, 301);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(19, 17);
			this->label35->TabIndex = 5;
			this->label35->Text = L"M";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(253, 241);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(19, 17);
			this->label29->TabIndex = 5;
			this->label29->Text = L"M";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(253, 184);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(19, 17);
			this->label22->TabIndex = 5;
			this->label22->Text = L"M";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(253, 126);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(19, 17);
			this->label19->TabIndex = 5;
			this->label19->Text = L"M";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(195, 301);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(15, 17);
			this->label34->TabIndex = 5;
			this->label34->Text = L"J";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(195, 241);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(15, 17);
			this->label28->TabIndex = 5;
			this->label28->Text = L"J";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(195, 184);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(15, 17);
			this->label15->TabIndex = 5;
			this->label15->Text = L"J";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(195, 126);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(15, 17);
			this->label20->TabIndex = 5;
			this->label20->Text = L"J";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(64, 90);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"type paiement";
			// 
			// type_paiementCommande
			// 
			this->type_paiementCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->type_paiementCommande->Location = System::Drawing::Point(189, 87);
			this->type_paiementCommande->Name = L"type_paiementCommande";
			this->type_paiementCommande->Size = System::Drawing::Size(202, 22);
			this->type_paiementCommande->TabIndex = 3;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(57, 324);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(92, 17);
			this->label33->TabIndex = 4;
			this->label33->Text = L"date livraison";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(57, 264);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(103, 17);
			this->label27->TabIndex = 4;
			this->label27->Text = L"date reglement";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(57, 207);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(98, 17);
			this->label12->TabIndex = 4;
			this->label12->Text = L"date paiement";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(57, 149);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(95, 17);
			this->label24->TabIndex = 4;
			this->label24->Text = L"date emission";
			// 
			// annee_date_livraisonCommande
			// 
			this->annee_date_livraisonCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->annee_date_livraisonCommande->Location = System::Drawing::Point(312, 321);
			this->annee_date_livraisonCommande->Name = L"annee_date_livraisonCommande";
			this->annee_date_livraisonCommande->Size = System::Drawing::Size(79, 22);
			this->annee_date_livraisonCommande->TabIndex = 3;
			// 
			// annee_date_reglementCommande
			// 
			this->annee_date_reglementCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->annee_date_reglementCommande->Location = System::Drawing::Point(312, 261);
			this->annee_date_reglementCommande->Name = L"annee_date_reglementCommande";
			this->annee_date_reglementCommande->Size = System::Drawing::Size(79, 22);
			this->annee_date_reglementCommande->TabIndex = 3;
			// 
			// annee_date_paiementCommande
			// 
			this->annee_date_paiementCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->annee_date_paiementCommande->Location = System::Drawing::Point(312, 204);
			this->annee_date_paiementCommande->Name = L"annee_date_paiementCommande";
			this->annee_date_paiementCommande->Size = System::Drawing::Size(79, 22);
			this->annee_date_paiementCommande->TabIndex = 3;
			// 
			// annee_date_emissionCommande
			// 
			this->annee_date_emissionCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->annee_date_emissionCommande->Location = System::Drawing::Point(312, 146);
			this->annee_date_emissionCommande->Name = L"annee_date_emissionCommande";
			this->annee_date_emissionCommande->Size = System::Drawing::Size(79, 22);
			this->annee_date_emissionCommande->TabIndex = 3;
			// 
			// mois_date_livraisonCommande
			// 
			this->mois_date_livraisonCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->mois_date_livraisonCommande->Location = System::Drawing::Point(249, 321);
			this->mois_date_livraisonCommande->Name = L"mois_date_livraisonCommande";
			this->mois_date_livraisonCommande->Size = System::Drawing::Size(27, 22);
			this->mois_date_livraisonCommande->TabIndex = 3;
			// 
			// mois_date_reglementCommande
			// 
			this->mois_date_reglementCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->mois_date_reglementCommande->Location = System::Drawing::Point(249, 261);
			this->mois_date_reglementCommande->Name = L"mois_date_reglementCommande";
			this->mois_date_reglementCommande->Size = System::Drawing::Size(27, 22);
			this->mois_date_reglementCommande->TabIndex = 3;
			// 
			// mois_date_paiementCommande
			// 
			this->mois_date_paiementCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->mois_date_paiementCommande->Location = System::Drawing::Point(249, 204);
			this->mois_date_paiementCommande->Name = L"mois_date_paiementCommande";
			this->mois_date_paiementCommande->Size = System::Drawing::Size(27, 22);
			this->mois_date_paiementCommande->TabIndex = 3;
			// 
			// mois_date_emissionCommande
			// 
			this->mois_date_emissionCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->mois_date_emissionCommande->Location = System::Drawing::Point(249, 146);
			this->mois_date_emissionCommande->Name = L"mois_date_emissionCommande";
			this->mois_date_emissionCommande->Size = System::Drawing::Size(27, 22);
			this->mois_date_emissionCommande->TabIndex = 3;
			// 
			// jour_date_livraisonCommande
			// 
			this->jour_date_livraisonCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->jour_date_livraisonCommande->Location = System::Drawing::Point(189, 321);
			this->jour_date_livraisonCommande->Name = L"jour_date_livraisonCommande";
			this->jour_date_livraisonCommande->Size = System::Drawing::Size(27, 22);
			this->jour_date_livraisonCommande->TabIndex = 3;
			// 
			// jour_date_reglementCommande
			// 
			this->jour_date_reglementCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->jour_date_reglementCommande->Location = System::Drawing::Point(189, 261);
			this->jour_date_reglementCommande->Name = L"jour_date_reglementCommande";
			this->jour_date_reglementCommande->Size = System::Drawing::Size(27, 22);
			this->jour_date_reglementCommande->TabIndex = 3;
			// 
			// jour_date_paiementCommande
			// 
			this->jour_date_paiementCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->jour_date_paiementCommande->Location = System::Drawing::Point(189, 204);
			this->jour_date_paiementCommande->Name = L"jour_date_paiementCommande";
			this->jour_date_paiementCommande->Size = System::Drawing::Size(27, 22);
			this->jour_date_paiementCommande->TabIndex = 3;
			// 
			// jour_date_emissionCommande
			// 
			this->jour_date_emissionCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->jour_date_emissionCommande->Location = System::Drawing::Point(189, 146);
			this->jour_date_emissionCommande->Name = L"jour_date_emissionCommande";
			this->jour_date_emissionCommande->Size = System::Drawing::Size(27, 22);
			this->jour_date_emissionCommande->TabIndex = 3;
			// 
			// validerBouton
			// 
			this->validerBouton->Location = System::Drawing::Point(12, 342);
			this->validerBouton->Name = L"validerBouton";
			this->validerBouton->Size = System::Drawing::Size(127, 40);
			this->validerBouton->TabIndex = 0;
			this->validerBouton->Text = L"Valider";
			this->validerBouton->UseVisualStyleBackColor = true;
			this->validerBouton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBoxStock
			// 
			this->groupBoxStock->Controls->Add(this->couleur);
			this->groupBoxStock->Controls->Add(this->comboBox1);
			this->groupBoxStock->Controls->Add(this->label44);
			this->groupBoxStock->Controls->Add(this->label43);
			this->groupBoxStock->Controls->Add(this->label42);
			this->groupBoxStock->Controls->Add(this->label21);
			this->groupBoxStock->Controls->Add(this->label68);
			this->groupBoxStock->Controls->Add(this->TVAStock);
			this->groupBoxStock->Controls->Add(this->prixHTStock);
			this->groupBoxStock->Controls->Add(this->referenceStock);
			this->groupBoxStock->Location = System::Drawing::Point(165, 31);
			this->groupBoxStock->Name = L"groupBoxStock";
			this->groupBoxStock->Size = System::Drawing::Size(397, 403);
			this->groupBoxStock->TabIndex = 7;
			this->groupBoxStock->TabStop = false;
			this->groupBoxStock->Text = L"Stock";
			// 
			// couleur
			// 
			this->couleur->FormattingEnabled = true;
			this->couleur->Location = System::Drawing::Point(189, 228);
			this->couleur->Name = L"couleur";
			this->couleur->Size = System::Drawing::Size(202, 24);
			this->couleur->TabIndex = 5;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"moteur", L"capteur", L"circuit integré", L"autre" });
			this->comboBox1->Location = System::Drawing::Point(189, 278);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(202, 24);
			this->comboBox1->TabIndex = 5;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(72, 281);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(81, 17);
			this->label44->TabIndex = 4;
			this->label44->Text = L"type d\'objet";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(98, 231);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(55, 17);
			this->label43->TabIndex = 4;
			this->label43->Text = L"couleur";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(118, 188);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(35, 17);
			this->label42->TabIndex = 4;
			this->label42->Text = L"TVA";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(104, 136);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(49, 17);
			this->label21->TabIndex = 4;
			this->label21->Text = L"prixHT";
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Location = System::Drawing::Point(84, 90);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(69, 17);
			this->label68->TabIndex = 4;
			this->label68->Text = L"reference";
			// 
			// TVAStock
			// 
			this->TVAStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TVAStock->Location = System::Drawing::Point(189, 183);
			this->TVAStock->Name = L"TVAStock";
			this->TVAStock->Size = System::Drawing::Size(202, 22);
			this->TVAStock->TabIndex = 3;
			// 
			// prixHTStock
			// 
			this->prixHTStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prixHTStock->Location = System::Drawing::Point(189, 133);
			this->prixHTStock->Name = L"prixHTStock";
			this->prixHTStock->Size = System::Drawing::Size(202, 22);
			this->prixHTStock->TabIndex = 3;
			// 
			// referenceStock
			// 
			this->referenceStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->referenceStock->Location = System::Drawing::Point(189, 87);
			this->referenceStock->Name = L"referenceStock";
			this->referenceStock->Size = System::Drawing::Size(202, 22);
			this->referenceStock->TabIndex = 3;
			// 
			// textBoxID
			// 
			this->textBoxID->Location = System::Drawing::Point(67, 62);
			this->textBoxID->Name = L"textBoxID";
			this->textBoxID->Size = System::Drawing::Size(59, 22);
			this->textBoxID->TabIndex = 8;
			// 
			// labelID
			// 
			this->labelID->AutoSize = true;
			this->labelID->Location = System::Drawing::Point(28, 65);
			this->labelID->Name = L"labelID";
			this->labelID->Size = System::Drawing::Size(21, 17);
			this->labelID->TabIndex = 9;
			this->labelID->Text = L"ID";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1422, 491);
			this->Controls->Add(this->labelID);
			this->Controls->Add(this->textBoxID);
			this->Controls->Add(this->groupBoxClient);
			this->Controls->Add(this->groupBoxPersonnel);
			this->Controls->Add(this->groupBoxStock);
			this->Controls->Add(this->groupBoxCommande);
			this->Controls->Add(this->annulerBouton);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->validerBouton);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBoxClient->ResumeLayout(false);
			this->groupBoxClient->PerformLayout();
			this->groupBoxPersonnel->ResumeLayout(false);
			this->groupBoxPersonnel->PerformLayout();
			this->groupBoxCommande->ResumeLayout(false);
			this->groupBoxCommande->PerformLayout();
			this->groupBoxStock->ResumeLayout(false);
			this->groupBoxStock->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

			this->groupBoxClient->Hide();
			this->groupBoxCommande->Hide();
			this->groupBoxPersonnel->Hide();
			this->groupBoxStock->Hide();
			this->textBoxID->Hide();
			this->labelID->Hide();
		}

#pragma endregion
private: System::Void creerToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->groupBoxClient->Show();
	this->groupBoxCommande->Hide();
	this->groupBoxPersonnel->Hide();
	this->groupBoxStock->Hide();
	this->textBoxID->Hide();
	this->labelID->Hide();
	//strategy_ = gcnew GestionClients();
	typeStrategy = "creer";
	typeGestion = "client";
}
private: System::Void modifierToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->groupBoxClient->Show();
	this->groupBoxCommande->Hide();
	this->groupBoxPersonnel->Hide();
	this->groupBoxStock->Hide();
	this->textBoxID->Show();
	this->labelID->Show();
	typeStrategy = "modifier";
	typeGestion = "client";
}
private: System::Void supprimerToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->groupBoxClient->Show();
	this->groupBoxCommande->Hide();
	this->groupBoxPersonnel->Hide();
	this->groupBoxStock->Hide();
	this->textBoxID->Show();
	this->labelID->Show();
	typeGestion = "client";
	typeStrategy = "supprimer";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (typeGestion == "client") {
		if (typeStrategy == "creer") {
			strategy_ = gcnew GestionClients(nomClient->Text, prenomClient->Text, annee_date_naissanceClient->Text, mois_date_naissanceClient->Text, jour_date_naissanceClient->Text);
			this->strategy_->creer();
		}
		if (typeStrategy == "modifier") {
			int ID = Convert::ToInt32(textBoxID->Text);
			strategy_ = gcnew GestionClients(nomClient->Text, prenomClient->Text, annee_date_naissanceClient->Text, mois_date_naissanceClient->Text, jour_date_naissanceClient->Text, ID);
			this->strategy_->modifier();
		}
		if (typeStrategy == "supprimer") {
		}
		if (typeStrategy == "rechercher") {
		}
		try {
			String^ Constring = L"Server=127.0.0.1;user=root;password=Password123;Database=ProjetBDD";
			MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);
			MySqlDataAdapter^ Adapt = gcnew MySqlDataAdapter("select * from client", ConnectDB);
			DataTable^ DT = gcnew DataTable();
			Adapt->Fill(DT);
			bindingSource1->DataSource = DT;
			dataGridView1->DataSource = bindingSource1;
		}
		catch (exception e) {}
	}


	if (typeGestion == "commande") {
		if (typeStrategy == "creer") {
		}
		if (typeStrategy == "modifier") {
		}
		if (typeStrategy == "supprimer") {
		}
		if (typeStrategy == "rechercher") {
		}
		try {
			String^ Constring = L"Server=127.0.0.1;user=root;password=Password1234;Database=ProjetBDD";
			MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);
			MySqlDataAdapter^ Adapt = gcnew MySqlDataAdapter("select * from client", ConnectDB);
			DataTable^ DT = gcnew DataTable();
			Adapt->Fill(DT);
			bindingSource1->DataSource = DT;
			dataGridView1->DataSource = bindingSource1;
		}
		catch (exception e) {}
	}
	if (typeGestion == "personnel") {
		if (typeStrategy == "creer") {
			strategy_ = gcnew GestionPersonnel(nomPersonnel->Text, prenomPersonnel->Text, annee_date_embauchePersonnel->Text, mois_date_embauchePersonnel->Text, jour_date_embauchePersonnel->Text);
			this->strategy_->creer();
		}
		if (typeStrategy == "modifier") {
			strategy_ = gcnew GestionPersonnel(nomPersonnel->Text, prenomPersonnel->Text, annee_date_embauchePersonnel->Text, mois_date_embauchePersonnel->Text, jour_date_embauchePersonnel->Text);
			this->strategy_->modifier();
		}
		if (typeStrategy == "supprimer") {
		}
		if (typeStrategy == "rechercher") {
		}
		try {
			String^ Constring = L"Server=127.0.0.1;user=root;password=Password123;Database=ProjetBDD";
			MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);
			MySqlDataAdapter^ Adapt = gcnew MySqlDataAdapter("select * from personnel", ConnectDB);
			DataTable^ DT = gcnew DataTable();
			Adapt->Fill(DT);
			bindingSource1->DataSource = DT;
			dataGridView1->DataSource = bindingSource1;
		}
		catch (exception e) {}
	}
	if (typeGestion == "stock") {
		if (typeStrategy == "creer") {
			int prixHT = Convert::ToInt32(prixHTStock->Text);
			double TVA = Convert::ToInt32(TVAStock->Text);
			strategy_ = gcnew GestionStock(prixHT, referenceStock->Text, TVA,couleur->Text, comboBox1->Text);
			this->strategy_->creer();
		}
		if (typeStrategy == "modifier") {
			int prixHT = Convert::ToInt32(prixHTStock->Text);
			double TVA = Convert::ToInt32(TVAStock->Text);
			strategy_ = gcnew GestionStock(prixHT, referenceStock->Text, TVA, couleur->Text, comboBox1->Text);
			this->strategy_->modifier();
		}
		if (typeStrategy == "supprimer") {
		}
		if (typeStrategy == "rechercher") {
		}
		try {
			String^ Constring = L"Server=127.0.0.1;user=root;password=Password123;Database=ProjetBDD";
			MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);
			MySqlDataAdapter^ Adapt = gcnew MySqlDataAdapter("select * from client", ConnectDB);
			DataTable^ DT = gcnew DataTable();
			Adapt->Fill(DT);
			bindingSource1->DataSource = DT;
			dataGridView1->DataSource = bindingSource1;
		}
		catch (exception e) {}
	}
}
private: System::Void rechercherclientToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->groupBoxClient->Show();
	this->groupBoxCommande->Hide();
	this->groupBoxPersonnel->Hide();
	this->groupBoxStock->Hide();
	this->textBoxID->Show();
	this->labelID->Show();
	typeGestion = "client";
	typeStrategy = "rechercher";
}
private: System::Void nouveaucommandeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->groupBoxClient->Hide();
	this->groupBoxCommande->Show();
	this->groupBoxPersonnel->Hide();
	this->groupBoxStock->Hide();
	this->textBoxID->Hide();
	this->labelID->Hide();
	typeGestion = "commande";
	typeStrategy = "creer";
}
private: System::Void modifiercommandeToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->groupBoxClient->Hide();
	this->groupBoxCommande->Show();
	this->groupBoxPersonnel->Hide();
	this->groupBoxStock->Hide();
	this->textBoxID->Show();
	this->labelID->Show();
	typeGestion = "commande";
	typeStrategy = "modifier";
}
private: System::Void supprimercommandeToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->groupBoxClient->Hide();
	this->groupBoxCommande->Show();
	this->groupBoxPersonnel->Hide();
	this->groupBoxStock->Hide();
	this->textBoxID->Show();
	this->labelID->Show();
	typeGestion = "commande";
	typeStrategy = "supprimer";
}
private: System::Void recherchercommandeToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->groupBoxClient->Hide();
	this->groupBoxCommande->Show();
	this->groupBoxPersonnel->Hide();
	this->groupBoxStock->Hide();
	this->textBoxID->Show();
	this->labelID->Show();
	typeGestion = "commande";
	typeStrategy = "rechercher";
}
private: System::Void nouveaustockToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->groupBoxClient->Hide();
	this->groupBoxCommande->Hide();
	this->groupBoxPersonnel->Hide();
	this->groupBoxStock->Show();
	this->textBoxID->Hide();
	this->labelID->Hide();
	typeGestion = "stock";
	typeStrategy = "creer";
}
private: System::Void modifierstockToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->groupBoxClient->Hide();
	this->groupBoxCommande->Hide();
	this->groupBoxPersonnel->Hide();
	this->groupBoxStock->Show();
	this->textBoxID->Show();
	this->labelID->Show();
	typeGestion = "stock";
	typeStrategy = "modifier";
}
private: System::Void supprimerstockToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->groupBoxClient->Hide();
	this->groupBoxCommande->Hide();
	this->groupBoxPersonnel->Hide();
	this->groupBoxStock->Show();
	typeGestion = "stock";
	typeStrategy = "supprimer";
}
private: System::Void rechercherstockToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->groupBoxClient->Hide();
	this->groupBoxCommande->Hide();
	this->groupBoxPersonnel->Hide();
	this->groupBoxStock->Show();
	this->textBoxID->Show();
	this->labelID->Show();
	typeGestion = "stock";
	typeStrategy = "rechercher";
}
private: System::Void nouveaupersonnelToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->groupBoxClient->Hide();
	this->groupBoxCommande->Hide();
	this->groupBoxPersonnel->Show();
	this->groupBoxStock->Hide();
	this->textBoxID->Hide();
	this->labelID->Hide();
	typeGestion = "personnel";
	typeStrategy = "creer";
}
private: System::Void modifierpersonnelToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->groupBoxClient->Hide();
	this->groupBoxCommande->Hide();
	this->groupBoxPersonnel->Show();
	this->groupBoxStock->Hide();
	this->textBoxID->Show();
	this->labelID->Show();
	typeGestion = "personnel";
	typeStrategy = "modifier";
}
private: System::Void supprimerpersonnelToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->groupBoxClient->Hide();
	this->groupBoxCommande->Hide();
	this->groupBoxPersonnel->Show();
	this->groupBoxStock->Hide();
	this->textBoxID->Show();
	this->labelID->Show();
	typeGestion = "personnel";
	typeStrategy = "supprimer";
}
private: System::Void rechercherpersonnelToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->groupBoxClient->Hide();
	this->groupBoxCommande->Hide();
	this->groupBoxPersonnel->Show();
	this->groupBoxStock->Hide();
	this->textBoxID->Show();
	this->labelID->Show();
	typeGestion = "personnel";
	typeStrategy = "rechercher";
}
};
}