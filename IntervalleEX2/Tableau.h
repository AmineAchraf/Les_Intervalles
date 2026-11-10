#pragma once
class Tableau
{
protected:
	float* tab;
	int taille;
public:
	Tableau(int n);
	Tableau (const Tableau& T);
	Tableau& operator=(const Tableau& T);
	float& operator[](int index);
	void affiche() const;
	~Tableau();
};			

