/*
Vendor Reset - Vendor Specific Reset
Copyright (C) 2020 Geoffrey McRae <geoff@hostfission.com>

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program; if not, write to the Free Software Foundation, Inc., 59 Temple
Place, Suite 330, Boston, MA 02111-1307 USA
*/

enum amd_device_type
{
  AMD_POLARIS10,
  AMD_POLARIS11,
  AMD_POLARIS12,
  AMD_VEGA10,
  AMD_VEGA12,
  AMD_VEGA20,
  AMD_NAVI10,
  AMD_NAVI12,
  AMD_NAVI14,
};

extern const struct vendor_reset_ops amd_polaris10_ops;
extern const struct vendor_reset_ops amd_vega10_ops;
extern const struct vendor_reset_ops amd_vega20_ops;
extern const struct vendor_reset_ops amd_navi10_ops;
