/*
 * Program: n42.bin
 * Function: FUN_001904c4
 * Entry: 001904c4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001904c4(void)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uStack_4c;
  undefined4 local_48 [5];
  int iStack_34;
  int local_30 [10];
  
  if (B_m9cvn != '\0') {
    kryptoCounter = 0;
    if (B_cksbrdy == '\0') {
      uVar3 = 0;
      if (_DAT_00f00180 != 0) {
        puVar2 = &uStack_4c;
        iVar4 = 0xf00000;
        piVar1 = &iStack_34;
        do {
          puVar2 = puVar2 + 1;
          *puVar2 = *(undefined4 *)(iVar4 + 0x184);
          piVar1 = piVar1 + 1;
          *piVar1 = (*(int *)(iVar4 + 0x188) - *(int *)(iVar4 + 0x184)) + 1;
          iVar4 = iVar4 + 8;
          uVar3 = uVar3 + 1;
        } while (uVar3 < _DAT_00f00180);
      }
      _DAT_003f9f44 = FUN_00104f20(_DAT_00f00180,local_48,local_30,&DAT_003f9de8,&DAT_003f9f58);
      if (_DAT_003f9f44 != 1) {
        B_cksbrdy = '\x01';
        if (_DAT_003f9f44 == 0) {
          cvn = DAT_003f9de8;
          DAT_005b89d1 = DAT_003f9de9;
          DAT_005b89d2 = DAT_003f9dea;
          DAT_005b89d3 = DAT_003f9deb;
        }
        else {
          cvn = 0;
          DAT_005b89d1 = 0;
          DAT_005b89d2 = 0;
          DAT_005b89d3 = 0;
        }
      }
    }
    else if (B_cksbrdy2 == '\0') {
      uVar3 = 0;
      if (DAT_001c0180 != 0) {
        puVar2 = &uStack_4c;
        iVar4 = 0x1c0000;
        piVar1 = &iStack_34;
        do {
          puVar2 = puVar2 + 1;
          *puVar2 = *(undefined4 *)(iVar4 + 0x184);
          piVar1 = piVar1 + 1;
          *piVar1 = (*(int *)(iVar4 + 0x188) - *(int *)(iVar4 + 0x184)) + 1;
          iVar4 = iVar4 + 8;
          uVar3 = uVar3 + 1;
        } while (uVar3 < DAT_001c0180);
      }
      _DAT_003f9f44 = FUN_00104f20(DAT_001c0180,local_48,local_30,&DAT_003f9de8,&DAT_003f9f58);
      if (_DAT_003f9f44 != 1) {
        B_cksbrdy2 = '\x01';
        if (_DAT_003f9f44 == 0) {
          cvn2 = DAT_003f9de8;
          DAT_005b89d5 = DAT_003f9de9;
          DAT_005b89d6 = DAT_003f9dea;
          DAT_005b89d7 = DAT_003f9deb;
        }
        else {
          cvn2 = 0;
          DAT_005b89d5 = 0;
          DAT_005b89d6 = 0;
          DAT_005b89d7 = 0;
        }
      }
    }
  }
  return;
}

