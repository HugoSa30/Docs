/*
 * Program: n42.bin
 * Function: FUN_00197d70
 * Entry: 00197d70
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00197d70(void)

{
  short sVar1;
  short sVar2;
  
  sVar1 = func_0xff2216a8(tateout,0x27);
  sVar2 = func_0xff2216a8(tevper,5);
  if (B_bttev == '\0') {
    if (B_tevtstp == '\0') {
      func_0xff263ebc(4,(int)sVar1,(int)sVar2);
    }
    else {
      FUN_001aaf94(4,(int)sVar1,(int)sVar2);
    }
  }
  else if (B_tevet == '\0') {
    func_0xff263ebc(4,10000,0x32);
  }
  else {
    func_0xff263ebc(4,0,0x32);
  }
  B_tevtini = FUN_001aaf50(4);
  return;
}

