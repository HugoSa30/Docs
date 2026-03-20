/*
 * Program: n42.bin
 * Function: FUN_00143178
 * Entry: 00143178
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00143178(void)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  char *pcVar4;
  int in_r8;
  byte bVar5;
  byte bVar6;
  byte *unaff_r27;
  uint unaff_r28;
  int unaff_r29;
  int iVar7;
  uint uVar8;
  
  do {
    uVar1 = unaff_r28 & 0xff;
    bVar6 = *unaff_r27;
    uVar8 = (uint)bVar6;
    if (uVar8 - 1 == uVar1) {
      bVar5 = 0;
      puVar3 = (undefined *)(unaff_r29 + uVar1 * 0x28 + -1);
      do {
        puVar3 = puVar3 + 1;
        *puVar3 = 0;
        bVar5 = bVar5 + 1;
      } while (bVar5 < 0x28);
      *unaff_r27 = bVar6 - 1;
    }
    else {
      while ((uVar1 = uVar1 + 1 & 0xff, uVar1 < uVar8 && (uVar1 < 0xb))) {
        FUN_00155d4c(uVar1);
      }
      *unaff_r27 = (byte)(uVar8 + 0xff);
      bVar6 = 0;
      puVar3 = (undefined *)(unaff_r29 + (uVar8 + 0xff & 0xff) * 0x28 + -1);
      do {
        puVar3 = puVar3 + 1;
        *puVar3 = 0;
        bVar6 = bVar6 + 1;
      } while (bVar6 < 0x28);
    }
    do {
      do {
        do {
          while( true ) {
            unaff_r28 = unaff_r28 + 1 & 0xff;
            if ((*unaff_r27 <= unaff_r28) || (10 < unaff_r28)) {
              return;
            }
            iVar7 = unaff_r28 * 0x28;
            if ((*(ushort *)(unaff_r29 + iVar7 + 2) & 1) != 1) break;
            if ((((*(ushort *)(unaff_r29 + iVar7 + 4) & 1) != 1) &&
                (*(int *)((uint)(byte)(&DAT_001d44b1)
                                      [(uint)(*(ushort *)(unaff_r29 + iVar7 + 4) >> 8) * 0xd] * 4 +
                         0x1bc2c) == in_r8)) && ((*(ushort *)(unaff_r29 + iVar7 + 2) >> 1 & 1) == 1)
               ) {
              if (*(char *)(unaff_r29 + iVar7 + 6) != '\0') {
                pcVar4 = (char *)(unaff_r29 + iVar7 + 6);
                *pcVar4 = *pcVar4 + -1;
              }
              if (*(char *)(unaff_r29 + iVar7 + 6) == '\0') {
                iVar2 = unaff_r29 + iVar7;
                *(ushort *)(iVar2 + 4) = *(ushort *)(iVar2 + 4) & 0xfffe | 1;
                *(ushort *)(iVar2 + 4) = *(ushort *)(iVar2 + 4) & 0xfffd | 2;
                if ((&DAT_001d44b0)[(uint)(*(ushort *)(iVar2 + 4) >> 8) * 0xd] != '\0') {
                  iVar2 = unaff_r29 + iVar7;
                  *(ushort *)(iVar2 + 4) = *(ushort *)(iVar2 + 4) & 0xfff7 | 8;
                  if ((&DAT_001d44b0)[(uint)(*(ushort *)(iVar2 + 4) >> 8) * 0xd] == '\x02') {
                    *(ushort *)(unaff_r29 + iVar7 + 4) =
                         *(ushort *)(unaff_r29 + iVar7 + 4) & 0xffef | 0x10;
                  }
                }
                *(undefined *)(unaff_r29 + iVar7 + 8) =
                     (&DAT_001d44ba)[(uint)(*(ushort *)(unaff_r29 + iVar7 + 4) >> 8) * 0xd];
              }
            }
          }
        } while ((((*(ushort *)(unaff_r29 + iVar7 + 4) & 1) != 1) ||
                 (*(int *)((uint)(byte)(&DAT_001d44b3)
                                       [(uint)(*(ushort *)(unaff_r29 + iVar7 + 4) >> 8) * 0xd] * 4 +
                          0x1bc2c) != in_r8)) ||
                ((*(ushort *)(unaff_r29 + iVar7 + 2) >> 1 & 1) != 1));
        if (*(char *)(unaff_r29 + iVar7 + 7) != '\0') {
          pcVar4 = (char *)(unaff_r29 + iVar7 + 7);
          *pcVar4 = *pcVar4 + -1;
        }
      } while (*(char *)(unaff_r29 + iVar7 + 7) != '\0');
      iVar7 = unaff_r29 + iVar7;
      *(ushort *)(iVar7 + 4) = *(ushort *)(iVar7 + 4) & 0xfffe;
      *(ushort *)(iVar7 + 4) = *(ushort *)(iVar7 + 4) & 0xfff7;
      *(ushort *)(iVar7 + 4) = *(ushort *)(iVar7 + 4) & 0xffef;
    } while (*(char *)(iVar7 + 8) != '\0');
    *(undefined *)(unaff_r29 + unaff_r28 * 0x28) = 0;
  } while( true );
}

