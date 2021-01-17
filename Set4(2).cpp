#include<iostream>
using namespace std;
class DB;
class DM
{
 // distance in meteres and centimeteres
 public :
 int DMdistance;
 DM friend nall(DM dm , DB db );
};
class DB
{
	public :
 // distance in feet and inches
  int DBdistance;
  DM friend nall(DM dm , DB db );
};
DM nall(DM dm , DB db )
{
  DM dm1 ;
  db.DBdistance = db.DBdistance*(2.54); // converting inches to centimeters
  dm1.DMdistance = dm.DMdistance + db.DBdistance;
  return dm1;
}
int main()
{
 DM dm2 , dm3 ;
 DB db2 ;
 dm2.DMdistance = 5;
 db2.DBdistance = 100;
 dm3 = nall(dm2,db2);
 cout << "the value is " << dm3.DMdistance;
 return 0 ;
}

