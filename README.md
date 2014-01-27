Show-Touch-Highlight
====================

Import library to your Project 

Import the class "ShowTouchHighlight.h"

Add following method in the controller

-(void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event
{
    ShowTouchHighlight *touch = [[ShowTouchHighlight alloc]init];
    [touch showHightlight:self.view touches:touches time:0.2];
    
  }


Happy coding.
