/*
 * Program: n42.bin
 * Function: FUN_0018f340
 * Entry: 0018f340
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018f340(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  byte bStack_f;
  byte bStack_b;
  
  uVar2 = _B_sipddss;
  uVar1 = _TYP_ddss;
  if (((DAT_001c5968 == '\0') && (B_vl == 0)) && (B_stend != '\0')) {
    dpsdpsad_w = func_0xff225534(0x1c300,0x1c2e0);
    B_pddssmx = dpsraus_i <= _DPSRIMN;
    if (dpsraus_i < _DPSRIMX) {
      B_pddssmn = 0;
    }
    else {
      B_pddssmn = 1;
    }
  }
  else {
    dpsdpsad_w = 0;
  }
  bStack_f = (byte)uVar1;
  if (((bStack_f >> 6 & 1) != 0) || (bStack_b = (byte)uVar2, (bStack_b >> 6 & 1) != 0)) {
    dpsdpsad_w = 0;
  }
  return;
}

