/*
 * Program: n42.bin
 * Function: FUN_0013f148
 * Entry: 0013f148
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0013f148(void)

{
  byte unaff_r27;
  ushort unaff_r28;
  undefined uVar1;
  byte *unaff_r29;
  int unaff_r30;
  short sVar2;
  undefined *unaff_r31;
  byte in_cr0;
  
  if ((bool)(in_cr0 >> 1 & 1)) {
    if (unaff_r30 == 0) {
      *unaff_r31 = DAT_001c845c;
    }
    else {
      *unaff_r29 = unaff_r27 | 0x20;
      DAT_003fddaf = ~(unaff_r27 | 0x20);
    }
  }
  else {
    sVar2 = (unaff_r28 & 0xff) - 1;
    if (sVar2 < 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (undefined)sVar2;
    }
    *unaff_r31 = uVar1;
    if (DAT_003fc19e == '\0') {
      DAT_003fb329 = DAT_003fbebb != DAT_003fb32a;
      DAT_003fb32a = DAT_003fbebb;
      DAT_003fb321 = B_ac != DAT_003fb322;
      DAT_003fb322 = B_ac;
      DAT_003fb32b = B_ko != DAT_003fb32c;
      DAT_003fb32c = B_ko;
      if ((((bool)DAT_003fb321) || ((bool)DAT_003fb32b)) || ((bool)DAT_003fb329)) {
        *unaff_r29 = 2;
      }
      else {
        DAT_003fb323 = DAT_003fbe9b != DAT_003fb324;
        DAT_003fb324 = DAT_003fbe9b;
        if ((bool)DAT_003fb323) {
          *unaff_r29 = 1;
        }
      }
    }
    else {
      *unaff_r29 = unaff_r27 | 0x24;
      DAT_003fddaf = ~(unaff_r27 | 0x24);
    }
  }
  return;
}

