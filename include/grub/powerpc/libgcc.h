/*
 *  GRUB  --  GRand Unified Bootloader
 *  Copyright (C) 2004,2007  Free Software Foundation, Inc.
 *
 *  GRUB is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  GRUB is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with GRUB.  If not, see <http://www.gnu.org/licenses/>.
 */

void EXPORT_FUNC (memset) (void) __attribute__ ((weak));
void EXPORT_FUNC (__ashldi3) (void) __attribute__ ((weak));
void EXPORT_FUNC (__ashrdi3) (void) __attribute__ ((weak));
void EXPORT_FUNC (__lshrdi3) (void) __attribute__ ((weak));
void EXPORT_FUNC (__trampoline_setup) (void) __attribute__ ((weak));
void EXPORT_FUNC (__ucmpdi2) (void) __attribute__ ((weak));
