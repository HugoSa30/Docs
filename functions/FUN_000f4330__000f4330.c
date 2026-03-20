/*
 * Program: n42.bin
 * Function: FUN_000f4330
 * Entry: 000f4330
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000f4330(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  char cVar7;
  
  bVar1 = (&DAT_00016af6)[param_1 * 4];
  uVar5 = *(undefined4 *)((uint)(byte)(&DAT_00016af5)[param_1 * 4] * 0x14 + 0x16b98);
  iVar3 = (uint)(byte)(&DAT_00016af5)[param_1 * 4] * 4;
  puVar6 = (uint *)(&DAT_003fa49c + iVar3);
  cVar7 = *(char *)(param_1 * 0x18 + 0x17507);
  if (param_2 < 0) {
    cVar7 = cVar7 == '\0';
    if (param_2 == -0x8000) {
      param_2 = 0;
    }
    else {
      param_2 = (int)(short)-(short)param_2;
    }
  }
  uVar2 = *(uint *)(param_1 * 0x18 + 0x174f8) & 0xff;
  uVar4 = (*(code *)&SUB_00016110)(uVar2);
  (*(code *)&SUB_00016090)(uVar2);
  (*(code *)&SUB_00016038)(uVar2,(int)(param_2 * (uVar4 & 0xffff)) / 10000 & 0xffff);
  if (cVar7 == '\0') {
    (*(code *)&SUB_000160f0)(uVar2);
    *puVar6 = *puVar6 & ~(1 << (bVar1 & 0x3f));
  }
  else {
    (*(code *)&SUB_000160d0)(uVar2);
    *puVar6 = *puVar6 | 1 << (bVar1 & 0x3f);
  }
  (*(code *)&SUB_00015cd0)(uVar5,*(undefined4 *)(&DAT_003fa444 + iVar3),*puVar6);
  return;
}

