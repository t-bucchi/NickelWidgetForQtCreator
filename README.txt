Nickel custom widget plugin for QtCreator/QtDesigner

1. これは何?

   QtCreator に Nickel の custom widget を追加するライブラリです。
   QtCreator の GUI 編集画面で Nickel の widget が扱えるようになります。

2. 対応している Widget

   * TouchLabel
   * N3ButtonLabel
   * TouchDropDown
   * TouchCheckBox
   * RadioButton
   * TouchSlider
   * WirelessPaginationWidget

3. ビルド

   ホスト PC 用の Qt 開発環境を整えてください。
   Ubuntu の場合、 qt-sdk を入れれば OK です。

   この README.txt があるディレクトリに移動して、以下のコマンドでビルドできま
   す。

   $ qmake
   $ make

   成功すると libnickelwidget.so が作成されます。

4. インストール

   どこかに Qt plugin 用のディレクトリを作成します。
   ここでは ~/QtPlugins にプラグインを置くことにします。

   $ mkdir ~/QtPlugins
   $ mkdir ~/QtPlugins/designer
   $ cp libnickelwidget.so ~/QtPlugins/desinger/
   
   環境変数 QT_PLUGIN_PATH を設定します。以下の行を .bashrc などに設定してくだ
   さい。

   export QT_PLGUIN_PATH=~/QtPlugins

   ログインしなおせば QtCreator 上に custom widget が追加されていると思います。

5. 制限

   TouchDropDown のリストを編集できません。
   .ui ではなく、コードからアイテムを追加してください。
