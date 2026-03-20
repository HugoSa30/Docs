/*
 * Program: n42.bin
 * Function: FUN_000c3afc
 * Entry: 000c3afc
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000c3afc(void)

{
  char cVar2;
  undefined4 uVar1;
  uint uVar3;
  undefined4 local_20 [5];
  
  if (NINJO < nmot) {
    if ((((zzyl == 1) || (zzyl == 3)) || (zzyl == 5)) || (zzyl == 7)) {
      uVar3 = 0;
      do {
        cVar2 = (*(code *)&SUB_00068c20)((int)(short)(&abbwevz)[uVar3],uVar3);
        if (cVar2 == '\0') {
          (&DAT_005b9aa8)[uVar3] = (&DAT_005b9aa8)[uVar3] + 1;
        }
        uVar1 = (*(code *)&SUB_00fb0ed0)(uVar3);
        local_20[uVar3] = uVar1;
        uVar3 = uVar3 + 1 & 0xff;
      } while (uVar3 < 4);
    }
  }
  else {
    uVar3 = 0;
    do {
      cVar2 = (*(code *)&SUB_00068c20)((int)(short)(&abbwevz)[uVar3],uVar3);
      if (cVar2 == '\0') {
        (&DAT_005b9aa8)[uVar3] = (&DAT_005b9aa8)[uVar3] + 1;
      }
      uVar1 = (*(code *)&SUB_00fb0ed0)(uVar3);
      local_20[uVar3] = uVar1;
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 4);
  }
  return;
}

