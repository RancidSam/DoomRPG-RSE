﻿using System;
using System.Windows.Forms;

namespace DoomRPG
{
    public static class Utils
    {
        public static void ShowError(Exception e)
        {
            MessageBox.Show(e.Message + "\n" + e.StackTrace + "\n" + e.InnerException, "An error has occured!", MessageBoxButtons.OK, MessageBoxIcon.Error);
        }
    }
}
