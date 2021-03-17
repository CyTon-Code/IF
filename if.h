#ifndef if_construction
#define if_construction

void if_true(){
    cout << "1 < 2 is true";
}
void if_false(){
    cout << "1 < 2 is false";
}

void IF(bool term){
  void (*_false)();
  void (*_true)();
  _false = if_false*term;
  _true = if_true*!term;
  _true();_false();
}

#endif // if_construction
