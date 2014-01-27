Show-Touch-Highlight 
[Open Source Code]
====================


This library was created to highlight touches in iPhone/iPad screen. For e.g: If you touch anywhere on the in the screen it highlights in red color. Red circle will identifies your touch on the screen.





Import library to your Project 

Import the class "ShowTouchHighlight.h"

Add following method in the controller

-(void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event
{
    ShowTouchHighlight *touch = [[ShowTouchHighlight alloc]init];
    [touch showHightlight:self.view touches:touches time:0.2];
    
  }


Happy coding.
