/*
 * Program: n42.bin
 * Function: FUN_000cde00
 * Entry: 000cde00
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000cde00(void)

{
  char cVar1;
  ushort local_8;
  byte local_6;
  
  cVar1 = func_0x01033934(0x10,&local_8);
  if (cVar1 == '\0') {
    if (local_8 < 0x8000) {
      lws_w = local_8;
    }
    else if (local_8 == 0x8000) {
      lws_w = 0;
    }
    else {
      lws_w = -(local_8 & 0x7fff);
    }
    DAT_003fbea3 = 1;
    DAT_003fbea2 = 1;
  }
  else {
    DAT_003fbea3 = 0;
    if ((local_6 & 7) != 0) {
      DAT_003fbea2 = 0;
      lws_w = 0;
    }
  }
  return;
}

