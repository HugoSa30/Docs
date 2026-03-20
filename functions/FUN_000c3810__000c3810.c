/*
 * Program: n42.bin
 * Function: FUN_000c3810
 * Entry: 000c3810
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000c3810(void)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = 0;
  do {
    (*(code *)&SUB_00068924)(bVar1);
    bVar1 = bVar1 + 1;
  } while (bVar1 < 4);
  if (NINJO < nmot) {
    if ((((zzyl == 1) || (zzyl == 3)) || (zzyl == 5)) || ((zzyl == 7 || (DAT_003f9b22 == '\x01'))))
    {
      uVar2 = 0;
      do {
        if (B_stend == '\0') {
          DAT_003f9b23 = '\0';
        }
        else if (DAT_003f9b23 == '\0') {
          if ((DAT_005b8e34 >> 1 & 1) == 1) {
            (*(code *)&SUB_00fb0e64)(0,uVar2);
          }
          else {
            (*(code *)&SUB_00fb0e64)(1,uVar2);
          }
        }
        (*(code *)&SUB_00068d5c)((&DAT_005b9d90)[uVar2],uVar2,1);
        if ((DAT_003f9b22 != '\0') && (B_eculock == '\0')) {
          (*(code *)&SUB_00fb1134)(uVar2);
        }
        uVar2 = uVar2 + 1 & 0xff;
      } while (uVar2 < 4);
    }
  }
  else {
    uVar2 = 0;
    do {
      if (B_stend == '\0') {
        DAT_003f9b23 = '\0';
      }
      else if (DAT_003f9b23 == '\0') {
        if ((DAT_005b8e34 >> 1 & 1) == 1) {
          (*(code *)&SUB_00fb0e64)(0,uVar2);
        }
        else {
          (*(code *)&SUB_00fb0e64)(1,uVar2);
        }
      }
      (*(code *)&SUB_00068d5c)((&DAT_005b9d90)[uVar2],uVar2,1);
      if ((DAT_003f9b22 != '\0') && (B_eculock == '\0')) {
        (*(code *)&SUB_00fb1134)(uVar2);
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 4);
  }
  if (B_stend != '\0') {
    DAT_003f9b23 = '\x01';
  }
  if (DAT_003f9b22 != '\0') {
    if (B_eculock != '\0') {
      return;
    }
    DAT_003f9b22 = '\0';
  }
  if (B_eculock == '\0') {
    anzti = anzti + 1;
    anzti_w = anzti_w + 1;
  }
  return;
}

