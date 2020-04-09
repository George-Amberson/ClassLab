#include <iostream>
using namespace std;

//---------------------------------------------------------------------------------------------------------------------
class Game {
  int edition; //
public:
  virtual bool CoolorNot() = 0;

};
//---------------------------------------------------------------------------------------------------------------------
class Fighting : public Game {
  int FightingEd; 
public:
  bool CoolorNot() override {
    return 1;

  }

};
//---------------------------------------------------------------------------------------------------------------------
class Strategy : public Game {
  int StrategyEd; 
public:
  bool CoolorNot() override {
    return 1;
  }

};
//---------------------------------------------------------------------------------------------------------------------
class Tekken : public Fighting {
  int TekkenEd; 
public:
  int GetEd() {
    return TekkenEd;
  }

  void SetEd(int x) {
    this->TekkenEd = x;
  }
 bool CoolorNot() override {
   return 1;
  }
};
//---------------------------------------------------------------------------------------------------------------------
class MortalCombat : public Fighting {
  int MortalEd; 
public:
  int GetEd() {
    return MortalEd;
  }

  void SetEd(int x3) {
    this->MortalEd = x3;
  }

  bool CoolorNot() override {
    return 0;

  }
};
//---------------------------------------------------------------------------------------------------------------------
class UFC :public Fighting{
  int UFC_Ed;
public:
  int GetEd() {
    return UFC_Ed;
  }

  void SetEd(int x3) {
    this->UFC_Ed = x3;
  }

  bool CoolorNot() override {
    return 1;

  }
};
//---------------------------------------------------------------------------------------------------------------------
class Naruto_Shippuden :public Fighting{
  int NarutoEtoKtuto;
public:
  int Get_ed(){
    return NarutoEtoKtuto;
  }
    void SetEd(int x3) {
    this->NarutoEtoKtuto = x3;
  }

    bool CoolorNot() override {
      return 0;

    }
};
//---------------------------------------------------------------------------------------------------------------------
class TotalWar : public Strategy {
  int TotalEd; // ÿ óìåþ íàíîñèòü óðîí è âçðûâàòüñÿ òðè ðàçà
public:
  int GetEd() {
    return TotalEd;
  }

  void SetEd(int x4) {
    this->TotalEd = x4;
  }
  bool CoolorNot() override {
    return 1;


  }

};
//---------------------------------------------------------------------------------------------------------------------
class Warhammer : public Strategy {
  int WarhammerEd; // ÿ óìåþ íàíîñèòü óðîí è âçðûâàòüñÿ îäèí ðàç
public:
  int GetEd() {
    return WarhammerEd;
  }

  void SetBoom1(int x5) {
    this->WarhammerEd = x5;
  }
 bool CoolorNot() override {
   return 1;
  }
};
//---------------------------------------------------------------------------------------------------------------------
class StarCraft :public Strategy{
  int StarEd;
public:
  int GetEd() {
    return StarEd;
  }

  void SetBoom1(int x5) {
    this->StarEd = x5;
  }
  bool CoolorNot() override {
    return 0;
  }
};
//---------------------------------------------------------------------------------------------------------------------
class FrostPunk :public Strategy{
  int FrostEd;
public:
  int GetEd() {
    return FrostEd;
  }

  void SetBoom1(int x5) {
    this->FrostEd = x5;
  }
  bool CoolorNot() override {
    return 0;
  }
};
//---------------------------------------------------------------------------------------------------------------------
class Player {
public:
  void Info(Game* game) {
    cout << game->CoolorNot();
  }
};
//---------------------------------------------------------------------------------------------------------------------



int main() {
  setlocale(LC_ALL, "ru");

  Tekken t;
  MortalCombat m;
  UFC u;
  Naruto_Shippuden g;
  Player player;


  g.SetEd(60000000);
  int result = g.Get_ed();
  cout << result << endl;

  player.Info(&g);

}