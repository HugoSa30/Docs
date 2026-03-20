/*
 * Program: n42.bin
 * Function: FUN_00094144
 * Entry: 00094144
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00094144(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint unaff_r28;
  int unaff_r30;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint unaff_r31;
  uint uVar5;
  
  if (param_3 == 0) {
    cVar1 = FUN_00094a38(0);
    if (cVar1 == '\0') {
      _DAT_003fa15c = _DAT_003fa15c | 1 << (0x1f - (unaff_r28 >> 0xf) & 0x3f);
      uVar2 = unaff_r28 >> 2 & 0xf;
      if ((int)unaff_r31 < 0x10) {
        if ((unaff_r28 & 0xffffffc0) == unaff_r28) {
          uVar2 = 0;
          if (0 < (int)unaff_r31) {
            puVar4 = (undefined4 *)(unaff_r30 + -4);
            do {
              puVar4 = puVar4 + 1;
              *(undefined4 *)(&stack0x00000008 + uVar2 * 4) = *puVar4;
              uVar2 = uVar2 + 1 & 0xff;
            } while ((int)uVar2 < (int)unaff_r31);
          }
          for (uVar2 = unaff_r31 & 0xff; uVar2 < 0x10; uVar2 = uVar2 + 1 & 0xff) {
            *(undefined4 *)(&stack0x00000008 + uVar2 * 4) = 0xffffffff;
          }
        }
        else {
          uVar5 = 0;
          if (uVar2 != 0) {
            do {
              *(undefined4 *)(&stack0x00000008 + uVar5 * 4) = 0xffffffff;
              uVar5 = uVar5 + 1 & 0xff;
            } while (uVar5 < uVar2);
          }
          if (uVar2 < 0x10) {
            puVar4 = (undefined4 *)(unaff_r30 + -4);
            do {
              puVar4 = puVar4 + 1;
              *(undefined4 *)(&stack0x00000008 + uVar2 * 4) = *puVar4;
              uVar2 = uVar2 + 1 & 0xff;
            } while (uVar2 < 0x10);
          }
        }
      }
      else {
        uVar2 = 0;
        puVar4 = (undefined4 *)(unaff_r30 + -4);
        do {
          puVar4 = puVar4 + 1;
          *(undefined4 *)(&stack0x00000008 + uVar2 * 4) = *puVar4;
          uVar2 = uVar2 + 1 & 0xff;
        } while (uVar2 < 0x10);
      }
      cVar1 = FUN_00094b98(_DAT_003fa15c,&stack0x00000008,unaff_r28 & 0x7fc0,0);
      if (cVar1 == '\0') {
        do {
          do {
            cVar1 = FUN_00094d30();
          } while (cVar1 == '\x10');
        } while (cVar1 == '\x11');
      }
    }
    FUN_00095294();
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = 0x1000;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

