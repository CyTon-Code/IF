#ifndef if_construction
#define if_construction

void if_true(){
}
void if_false(){
}

void IF(bool term){
  void (*_false)() = if_false*int(term);
  void (*_true)() = if_true*int(!term);
  _true();_false();
}

#endif // if_construction
