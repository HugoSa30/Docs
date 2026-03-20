/*
 * Program: n42.bin
 * Function: FUN_00142fa4
 * Entry: 00142fa4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00142fa4(void)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  char *pcVar4;
  int in_r8;
  int in_r10;
  int in_r11;
  byte bVar5;
  byte bVar6;
  byte *unaff_r27;
  uint unaff_r28;
  int unaff_r29;
  int unaff_r30;
  uint uVar7;
  undefined *unaff_r31;
  
  do {
    if ((*(int *)(in_r11 + (uint)(byte)unaff_r31[in_r10 + 1] * 4) == in_r8) &&
       ((*(ushort *)(unaff_r29 + unaff_r30 + 2) >> 1 & 1) == 1)) {
      if (*(char *)(unaff_r29 + unaff_r30 + 6) != '\0') {
        pcVar4 = (char *)(unaff_r29 + unaff_r30 + 6);
        *pcVar4 = *pcVar4 + -1;
      }
      if (*(char *)(unaff_r29 + unaff_r30 + 6) == '\0') {
        iVar2 = unaff_r29 + unaff_r30;
        *(ushort *)(iVar2 + 4) = *(ushort *)(iVar2 + 4) & 0xfffe | 1;
        *(ushort *)(iVar2 + 4) = *(ushort *)(iVar2 + 4) & 0xfffd | 2;
        if (unaff_r31[(uint)(*(ushort *)(iVar2 + 4) >> 8) * 0xd] != '\0') {
          iVar2 = unaff_r29 + unaff_r30;
          *(ushort *)(iVar2 + 4) = *(ushort *)(iVar2 + 4) & 0xfff7 | 8;
          if (unaff_r31[(uint)(*(ushort *)(iVar2 + 4) >> 8) * 0xd] == '\x02') {
            *(ushort *)(unaff_r29 + unaff_r30 + 4) =
                 *(ushort *)(unaff_r29 + unaff_r30 + 4) & 0xffef | 0x10;
          }
        }
        *(undefined *)(unaff_r29 + unaff_r30 + 8) =
             unaff_r31[(uint)(*(ushort *)(unaff_r29 + unaff_r30 + 4) >> 8) * 0xd + 10];
      }
    }
    do {
      while( true ) {
        unaff_r28 = unaff_r28 + 1 & 0xff;
        if ((*unaff_r27 <= unaff_r28) || (10 < unaff_r28)) {
          return;
        }
        unaff_r30 = unaff_r28 * 0x28;
        if ((*(ushort *)(unaff_r29 + unaff_r30 + 2) & 1) == 1) break;
        if ((((*(ushort *)(unaff_r29 + unaff_r30 + 4) & 1) == 1) &&
            (*(int *)((uint)(byte)(&DAT_001d44b3)
                                  [(uint)(*(ushort *)(unaff_r29 + unaff_r30 + 4) >> 8) * 0xd] * 4 +
                     0x1bc2c) == in_r8)) && ((*(ushort *)(unaff_r29 + unaff_r30 + 2) >> 1 & 1) == 1)
           ) {
          if (*(char *)(unaff_r29 + unaff_r30 + 7) != '\0') {
            pcVar4 = (char *)(unaff_r29 + unaff_r30 + 7);
            *pcVar4 = *pcVar4 + -1;
          }
          if (*(char *)(unaff_r29 + unaff_r30 + 7) == '\0') {
            iVar2 = unaff_r29 + unaff_r30;
            *(ushort *)(iVar2 + 4) = *(ushort *)(iVar2 + 4) & 0xfffe;
            *(ushort *)(iVar2 + 4) = *(ushort *)(iVar2 + 4) & 0xfff7;
            *(ushort *)(iVar2 + 4) = *(ushort *)(iVar2 + 4) & 0xffef;
            if (*(char *)(iVar2 + 8) == '\0') {
              *(undefined *)(unaff_r29 + unaff_r28 * 0x28) = 0;
              bVar6 = *unaff_r27;
              uVar7 = (uint)bVar6;
              uVar1 = unaff_r28;
              if (uVar7 - 1 == unaff_r28) {
                bVar5 = 0;
                puVar3 = (undefined *)(unaff_r29 + unaff_r28 * 0x28 + -1);
                do {
                  puVar3 = puVar3 + 1;
                  *puVar3 = 0;
                  bVar5 = bVar5 + 1;
                } while (bVar5 < 0x28);
                *unaff_r27 = bVar6 - 1;
              }
              else {
                while ((uVar1 = uVar1 + 1 & 0xff, uVar1 < uVar7 && (uVar1 < 0xb))) {
                  FUN_00155d4c(uVar1);
                }
                *unaff_r27 = (byte)(uVar7 + 0xff);
                bVar6 = 0;
                puVar3 = (undefined *)(unaff_r29 + (uVar7 + 0xff & 0xff) * 0x28 + -1);
                do {
                  puVar3 = puVar3 + 1;
                  *puVar3 = 0;
                  bVar6 = bVar6 + 1;
                } while (bVar6 < 0x28);
              }
            }
          }
        }
      }
    } while ((*(ushort *)(unaff_r29 + unaff_r30 + 4) & 1) == 1);
    unaff_r31 = &DAT_001d44b0;
    in_r11 = 0x1bc2c;
    in_r10 = (uint)(*(ushort *)(unaff_r29 + unaff_r30 + 4) >> 8) * 0xd;
  } while( true );
}

