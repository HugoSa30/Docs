/*
 * Program: n42.bin
 * Function: FUN_0019d8f8
 * Entry: 0019d8f8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0019d8f8(void)

{
  if (DAT_005bb7b5 == '\0') {
    if (DAT_005bb7b7 == '\x01') {
      DAT_005bb83e = (*(code *)&SUB_00069edc)((int)DAT_005bb7b2,address,0,OUINIGEN);
      if (-1 < DAT_005bb83e) {
        DAT_005bb83e = (*(code *)&SUB_00069e9c)((int)DAT_005bb7b2,address,0);
      }
    }
    else {
      DAT_005bb7b5 = '\x01';
    }
  }
  else if (DAT_005bb7b5 == '\x01') {
    B_genactiv = 0;
    if (DAT_005bb7b2 != -1) {
      (*(code *)&SUB_00fb266c)();
    }
    DAT_005bb7b2 = -1;
  }
  else {
    DAT_005bb7b5 = '\0';
  }
  return;
}

