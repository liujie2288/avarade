{dede:sppage sptype='full' sptype='full' srul='1' erul='5'}{/dede:sppage}
{dede:previewurl}http://business.sohu.com/20160412/n443926105.shtml{/dede:previewurl}
{dede:keywordtrim}{/dede:keywordtrim}
{dede:descriptiontrim}{/dede:descriptiontrim}
{dede:item field='title' value='' isunit='' isdown=''}
   {dede:match}<h1 itemprop="headline">[内容]</h1>{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}
{dede:item field='writer' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}
{dede:item field='source' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}
{dede:item field='pubdate' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}@me=GetMkTime(@me);{/dede:function}
{/dede:item}
{dede:item field='body' value='' isunit='1' isdown='1'}
   {dede:match}<div itemprop="articleBody">[内容]<!-- seo标签描述 -->{/dede:match}
   {dede:trim replace=''}<a([^>]*)>(.*)</a>{/dede:trim}
{dede:trim replace=''}<script([^>]*)>(.*)</script>{/dede:trim}
{dede:trim replace=''}<!--(.*)-->{/dede:trim}
{dede:trim replace=''}<table([^>]*)>(.*)</table>{/dede:trim}
{dede:trim replace=''}<style([^>]*)>(.*)</style>{/dede:trim}
{dede:trim replace=''}<img([^>]*)>{/dede:trim}
{dede:trim replace=''}<object([^>]*)>(.*)</object>{/dede:trim}
{dede:trim replace=''}<embed([^>]*)>(.*)</embed>{/dede:trim}
{dede:trim replace=''}<iframe([^>]*)>(.*)</iframe>{/dede:trim}
{dede:trim replace=''}<param([^>]*)>(.*)</param>{/dede:trim}
{dede:trim replace=''}<div([^.]*)>{/dede:trim}
{dede:trim replace=''}</div>{/dede:trim}
   {dede:function}{/dede:function}
{/dede:item}
