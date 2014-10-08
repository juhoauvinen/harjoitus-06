/***********************************************
*Harjoitus 6
*Juho Auvinen
*Kuvaus:
*Kirjoita ohjelma, joka kysyy k‰ytt‰j‰lt‰ lompakossa olevan raham‰‰r‰n
*ja lihapiirakan hinnan.
*
*Ohjelma tutkii, onko k‰ytt‰j‰ll‰ varaa ostaa lihapiirakka.
*Jos on, ohjelma ilmoittaa, kuinka paljon lompakkoon j‰‰ viel‰ rahaa.
*Muuten ohjelma kehottaa k‰ytt‰j‰‰ paastoamaan.
*
*K‰yt‰ vain kahta muuttujaa. ‰l‰ v‰henn‰ lompakon sis‰lt‰‰, ellet voi
*ostaa lihapiirakkaa.
*
*Versio: 1.0
*PVM: 10.9.-14
************************************************/
#include <iostream>
using namespace std;

void main(void)
{
	int RAHA;
	int LIHIS;

	cout << "Paljonko lompakossasi on rahaa? \n";
	cin >> RAHA;
	cout << "No paljonko lihapiirakka maksaa? \n";
	cin >> LIHIS;

	if (RAHA < LIHIS)
		cout << "Paastoa raukkapieni..."
		<< "\n";

	if (RAHA >= LIHIS)
		cout << "Mahasi pullistelee lihapiirakasta ja lompakossasi on "
		<< (RAHA - LIHIS)
		<< " e."
		<< "\n";
}