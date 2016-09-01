#include <gtkmm.h>
#include <iostream>
using namespace Gtk;

void on_button_click();

int main(int argc, char* argv[]){
  Main kit(argc, argv);

  Window window;
  Button button("click");

  //button.set_size(100,100);

  window.set_default_size(640, 480);
  window.set_title("APP_NAME");
  window.set_position(WIN_POS_CENTER);
  window.set_border_width(10);

  button.signal_clicked().connect(
    sigc::ptr_fun(&on_button_click)
  );

  button.show();
  window.add(button);

  Main::run(window);

  return 0;
}

void on_button_click (){

  std::cout << "..hey, its working!" << std::endl;

}
