/*
 * Program: n42.bin
 * Function: FUN_001ab988
 * Entry: 001ab988
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_001ab988(undefined param_1,int param_2,int param_3,undefined param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (((param_2 == 0) && (param_3 == 0)) || (param_3 == 0)) {
    (*(code *)&SUB_00fb2c44)(0x51,0);
    uVar1 = 0;
  }
  else if (DAT_003fc5c8 == '\0') {
    (*(code *)&SUB_00fb2c44)(0x50,0);
    uVar1 = 0;
  }
  else {
    DAT_003fc5c9 = (*(code *)&SUB_00fadc20)();
    (*(code *)&SUB_00fad9ec)(0xffffffff);
    _DAT_003fc5c2 = (undefined2)(param_6 / 6);
    DAT_003fc5c0 = DAT_003fc5b5;
    uVar2 = 0;
    do {
      iVar4 = uVar2 * 0x70;
      (&UNK_003fc3f9)[iVar4] = 0xff;
      (&UNK_003fc3fb)[iVar4] = 0xff;
      (&UNK_003fc3f8)[iVar4] = 0;
      uVar3 = 0;
      do {
        (&UNK_003fc3f0)[iVar4 + uVar3] = 0;
        uVar3 = uVar3 + 1 & 0xffff;
      } while (uVar3 < 8);
      uVar2 = uVar2 + 1 & 0xffff;
    } while (uVar2 < 4);
    DAT_003fc5be = (undefined)param_2;
    DAT_003fc5bf = (undefined)param_3;
    if (param_5 < 0x32) {
      param_5 = 0x32;
    }
    _DAT_003fc5c4 = (undefined2)(60000000 / (param_5 * 0x3c));
    uVar1 = 1;
    DAT_003fc5c6 = param_1;
    DAT_003fc5c7 = param_4;
  }
  return uVar1;
}

