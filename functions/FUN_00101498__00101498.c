/*
 * Program: n42.bin
 * Function: FUN_00101498
 * Entry: 00101498
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00101498(void)

{
  uint uVar1;
  uint uVar2;
  int in_TBLr;
  int iVar3;
  int iVar4;
  
  uVar2 = 0;
  iVar4 = in_TBLr;
  while (iVar3 = iVar4, DAT_003f9f32 != '\0') {
    FUN_001095b4();
    FUN_00109d0c();
    FUN_00109d50();
    iVar4 = iVar3;
    if (5000 < (uint)(iVar3 - in_TBLr)) {
      uVar2 = uVar2 + 2;
      FUN_0010efc0();
      uVar1 = uVar2 & 0xff;
      in_TBLr = iVar3;
      if (uVar1 == 6) {
        FUN_00109570();
      }
      else if (uVar1 == 8) {
        FUN_0010b950();
      }
      else if (uVar1 == 10) {
        _();
        uVar2 = 0;
      }
    }
  }
  return;
}

