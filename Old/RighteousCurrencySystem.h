#ifndef RIGHTEOUSCURRENCYSYSTEM_H_
#define RIGHTEOUSCURRENCYSYSTEM_H_

class RCurrency
{
	private:
		int pWallet;
		int oWallet;
		int MuCurrency;
		void *vWallet;
		//int;
		 
	public:

		RCurrency *RCU;
		int PlayerWallet [1];

		RCurrency(){};
		RCurrency(int RCMoney){RCMoney = pWallet;};
		RCurrency(RCurrency const& RCT);
		~RCurrency(){};

		//Member Functions
		void MakeWallet(int wx);
		void TransferWallet(int,int);

		//Getters
		int getMoney() {return MuCurrency;};
		int getWallet() {return pWallet;};
		int getOWallet() {return oWallet;};

		//Setters
	void setMoney(int MaxMo){
		if(MaxMo = 0)
		{
			MaxMo = MuCurrency;
		}
		else if (MaxMo > 0)
			{
			MaxMo = MaxMo + MuCurrency;
			};
		};
	void setOWallet(int vx){oWallet = vx;};
	int setPlayerWallet(int wx){pWallet = wx;};
}


#endif