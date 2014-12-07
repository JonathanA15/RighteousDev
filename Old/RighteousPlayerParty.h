#ifndef RIGHTEOUSPLAYERPARTY_H_
#define RIGHTEOUSPLAYERPARTY_H_

class RSP
{
	private:
		std::vector<int>PlayerParty;

	public:
		RSP(){};
		RSP(RSP const& RSP);
		~RSP(){};

		void newParty();
		void AddMember();
		void RemoveMember();

}

#endif