#include "../Model/model.h"
#include "../View/view.h"

#define Print(x) view.printRecord(x);

class Controller {
  private:
  Model model;
  View view;

  public:
    string modelSith() {
      return model.modelSith();

    }
    string modelJedi() {
    return model.modelJedi();
}





inline void updateView(string jedi, string sith) {
  Print(jedi)
  Print(sith)
  view.printRecord(jedi);
  view.printRecord(sith);
}


};