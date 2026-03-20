/*
 * Program: n42.bin
 * Function: FUN_0009422c
 * Entry: 0009422c
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_0009422c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  int unaff_r28;
  uint unaff_r29;
  undefined4 *unaff_r30;
  undefined4 uVar3;
  uint unaff_r31;
  
  for (; (int)unaff_r29 < (int)unaff_r31; unaff_r29 = unaff_r29 + 1 & 0xff) {
    unaff_r30 = unaff_r30 + 1;
    *(undefined4 *)(unaff_r28 + unaff_r29 * 4) = *unaff_r30;
  }
  for (uVar1 = unaff_r31 & 0xff; uVar1 < 0x10; uVar1 = uVar1 + 1 & 0xff) {
    *(undefined4 *)(&stack0x00000008 + uVar1 * 4) = 0xffffffff;
  }
  cVar2 = FUN_00094b98(param_1,&stack0x00000008,param_3,0);
  if (cVar2 == '\0') {
    do {
      do {
        cVar2 = FUN_00094d30();
      } while (cVar2 == '\x10');
    } while (cVar2 == '\x11');
  }
  FUN_00095294();
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x1000;
  }
  return uVar3;
}

